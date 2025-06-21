#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int Mx=2*(1e5) + 1;
// int depth[Mx];
vector<int>depth(1e6,0);
void dfs(int i,int p,vector<vector<int>>&adj){
    for(auto it:adj[i]){
        if(it==p)continue;
        depth[it]=depth[i]+1;
        dfs(it,i,adj);
    }
}
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<"0\n"; return;
    }
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    depth[1]=0;
    dfs(1,-1,adj);
    int j,md=0;
    for(int i=2;i<=n;i++){
        if(depth[i]>md){
            md=depth[i];
            j=i;
        }
    }
    depth[j]=0;
    dfs(j,0,adj);
    md=0;
    for(int i=1;i<=n;i++){
        md=max(md,depth[i]);
    }
    cout<<md<<"\n";

}
int main(){
    solve();
}