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
        cout<<"1\n"; return;
    }
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    set<int>st;
    depth[1]=0;
    dfs(1,-1,adj);
    int j,md=0;
    for(int i=2;i<=n;i++){
        if(depth[i]>md){
            md=depth[i];
            j=i;
        }
    }
    for(int i=1;i<3*1e5 + 1;i++){
        if(depth[i]==md)st.insert(i);
    }
    depth[j]=0;
    dfs(j,0,adj);
    md=0;
    for(int i=1;i<=n;i++){
        md=max(md,depth[i]);
    }
    for(int i=1;i<3*1e5 + 1;i++){
        if(depth[i]==md)st.insert(i);
    }
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            cout<<md<<"\n";
        }
        else{
            cout<<md+1<<"\n";
        }
    }
 
}
int main(){
    solve();
}