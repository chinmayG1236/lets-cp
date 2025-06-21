#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void dfs(int i,int par,vector<vector<int>>&adj,vector<int>&p){
    p[i]=par;
    for(auto it:adj[i]){
        if(it==par)continue;
        dfs(it,i,adj,p);
    }
}
void solve(){
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    vector<int>p(n+1),d(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        d[x]++;d[y]++;
    }
    dfs(1,0,adj,p);
    queue<int>q; q.push(1);
    int ct=0,ans=INT_MAX;
    while(!q.empty()){
        int sz=q.size();
        ct+=sz;
        ans=min(ans,n-ct);
        for(int k=0;k<sz;k++){
            int i=q.front(); q.pop();
            if(d[i]>1 || i==1){
                for(auto it:adj[i]){
                    if(it==p[i])continue;
                    q.push(it);
                }
            }
            else{
                int par=i;
                while(par!=1 && d[par]==1){
                    ct--;
                    d[p[par]]--;
                    par=p[par];
                }
            }
        }
    }   
    cout<<ans<<"\n";

    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}