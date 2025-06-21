#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int>depth(1e6,0);
void dfs(int i,int p,vector<vector<int>>&adj){
    for(auto it:adj[i]){
        if(it==p)continue;
        depth[it]=depth[i]+1;
        dfs(it,i,adj);
    }
}
void solve(){
    int n,k;cin>>n>>k;
    vector<bool>m(n+1,0);
    for(int i=0;i<k;i++){
        int x; cin>>x; m[x]=1;
    }
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(k==1){
        cout<<"0\n";return;
    }
    depth[1]=0;
    dfs(1,-1,adj);
    int j,md=0;
    for(int i=2;i<=n;i++){
        if(!m[i])continue;
        if(depth[i]>md){
            md=depth[i];
            j=i;
        }
    }
    depth[j]=0;
    dfs(j,0,adj);
    md=0;
    for(int i=1;i<=n;i++){
        if(m[i])md=max(md,depth[i]);
    }
    if(md %2==0){
        cout<<md/2<<"\n";
    }
    else{
        cout<<md/2 + 1<<"\n";
    }
 
}
int main(){
    int t; cin>>t;
    while(t--)solve();
}