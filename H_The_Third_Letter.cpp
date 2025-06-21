#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>co(1e6,LLONG_MAX);
bool g=0;
void dfs(ll i,vector<vector<pair<ll,ll>>>&adj){
    if(g)return;
    for(auto it:adj[i]){
        ll j=it.first,d=it.second;
        ll npos=co[i]+d;
        if(npos==co[j])continue;
        if(co[j]==LLONG_MAX)co[j]=npos;
        else if(co[j]!=npos){
            g=1; return;
        }
        dfs(j,adj);
    }
}
void solve(){
    ll n,m;cin>>n>>m;
    for(auto &it:co)it=LLONG_MAX;g=0;
    vector<vector<pair<ll,ll>>>adj(n+1);
    
    for(int i=0;i<m;i++){
        ll x,y,d;cin>>x>>y>>d;
        adj[y].push_back({x,d}); 
        adj[x].push_back({y,-d});
    }
    for(int i=1;i<=n;i++){
        if(co[i]!=LLONG_MAX)continue;
        if(adj.size()>2){
            co[i]=0;
            dfs(i,adj);
        }
        if(g){
            cout<<"NO\n";return;
        }
    }
    for(int i=1;i<=n;i++){
        if(co[i]!=LLONG_MAX)continue;
        if(adj[i].size()>0)dfs(i,adj);
        if(g){
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";

    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}