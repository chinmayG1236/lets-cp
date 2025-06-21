#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int Mx=2*(1e5) + 1;
// int depth[Mx];
set<pair<int,int>>st;
void dfs(int i,vector<vector<int>>&adj,vector<bool>&vis,int &ct,bool &c){
    if(adj[i].size()>2)c=0;
    if(vis[i])return;
    vis[i]=1;
    ct++;
    for(auto it:adj[i]){
        st.insert({min(i,it),max(i,it)});
        dfs(it,adj,vis,ct,c);
    }
}
void solve(){
    int n,m;cin>>n>>m;
    int ans=0;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool>vis(n+1,0);
    int ct=0;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        bool c=1;
        dfs(i,adj,vis,ct,c);
        if((int)st.size()==ct && c)ans++;
        ct=0;
        st.clear();
    }
    cout<<ans<<"\n";
}
int main(){
    solve();
}
