#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int dfs(int i,int p,vector<vector<int>>&adj,int &n,int&ct){
    int c=0;
    for(auto it:adj[i]){
        if(it==p)continue;
        if(dfs(it,i,adj,n,ct)==1){
            c=1;
        }
    }
    if(c==1){
        ct++; return 0;
    }
    else{
        return 1;
    }
}
void solve(){
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int c=0,ct=0;
    for(auto it:adj[1]){
        if(dfs(it,1,adj,n,ct)==1)c=1;
    }
    if(c==1)ct++;
    cout<<ct<<"\n";
}
int main(){
    solve();
}