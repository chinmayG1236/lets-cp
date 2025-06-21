#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int dfs(int i,int p,vector<vector<int>>&adj,bool t){
    if(adj[i].size()==1 && p!=0)return t;
    int r=0,h=0;
    for(auto it:adj[i]){
        if(it==p)continue;
        int x= dfs(it,i,adj,!t);
        if(x==1)r++;
        else h++;
    }
    if(t==1){
        // next chance of h
        if(h>0)return 0;
        else return 1; 
    }
    // next chance of r
    if(r>0)return 1;
    return 0;

}
void solve(){
    int n,tm;cin>>n>>tm;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int st; cin>>st;
    bool t=0;
    int ans=dfs(st,0,adj,t);
    if(ans==1)cout<<"Ron\n";
    else cout<<"Hermione\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}