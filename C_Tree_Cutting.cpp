#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int dfs(int i,int p,vector<vector<int>>&adj,int &c,int &k,int &m){
    int children=0;
    for(auto it:adj[i]){
        if(it==p)continue;
        children+=dfs(it,i,adj,c,k,m);
    }
    if(c>=k)return 1+children;
    if(1+children >= m){
        c++;
        return 0;
    }
    return 1+children;
}
void solve(){
    int n,k;cin>>n>>k;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans=1;
    int s=1,e=n;
    while(s<=e){
        int m=(s+e)/2;
        int c=0;
        int children= dfs(1,0,adj,c,k,m);
        if(c>=k && children>=m){
            s=m+1;
            ans=m;
        }
        else e=m-1;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}