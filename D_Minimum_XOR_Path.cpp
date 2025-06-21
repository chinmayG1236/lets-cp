#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll N,M,ans=LLONG_MAX;
void dfs(ll i,ll p,ll x,vector<vector<pair<ll,ll>>>&adj,vector<bool>&vis){
    if(i==N)ans=min(ans,x);
    vis[i]=1;
    for(auto &[it,w]:adj[i]){
        if(it==p)continue;
        if(vis[it])continue;
        x= (x^w);
        dfs(it,i,x,adj,vis);
        x= (x^w);
    }
    vis[i]=0;
}
void solve(){
    ll n,m; cin>>n>>m; N=n; M=m;
    vector<vector<pair<ll,ll>>>adj(n+1);
    for(int i=0;i<m;i++){
        ll x,y,w; cin>>x>>y>>w;
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }
    vector<bool>vis(n+1,0);
    
    ll x=0;
    dfs(1ll,0ll,x,adj,vis);
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}