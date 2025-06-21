#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll N,M,ans=0;
bool np=0;
void dfs(ll i,ll p,ll x,vector<vector<pair<ll,ll>>>&adj,vector<bool>&vis,
vector<ll>&a){
    if(np)return;
    if(vis[i] && a[i]!=x){
        np=1; return;
    }
    if(vis[i])return;
    vis[i]=1;
    a[i]=x;
    for(auto &[it,w]:adj[i]){
        if(it==p)continue;
        // if(vis[it])continue;
        x= (x^w);
        dfs(it,i,x,adj,vis,a);
        x= (x^w);
    }
    
}
void solve(){
    ll n,m; cin>>n>>m; N=n; M=m;
    vector<vector<pair<ll,ll>>>adj(n+1);
    vector<ll>a(n+1,-1),ind(n+1,0);
    for(int i=0;i<m;i++){
        ll x,y,w; cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
        ind[x]++; ind[y]++;
    }
    vector<bool>vis(n+1,0); queue<int>q;
    for(int i=1;i<=n;i++){
        if(ind[i]==1)q.push(i);
    }
    while(!q.empty()){
        int i=q.front(); q.pop();
        ll x=0;
        if(!vis[i])dfs(i,0ll,x,adj,vis,a);
    }

    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            ll x=0;
            dfs(i,0ll,x,adj,vis,a);
        }
    }
    if(np){
        cout<<"-1\n"; return;
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }

    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}