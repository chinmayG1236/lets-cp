#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int Mx=2*(1e5) + 1;
// int depth[Mx];

void solve(){
    int n,a,b;cin>>n>>a>>b;
    vector<vector<int>>adj(n+1);
    vector<int>ind(n+1,0);
    vector<bool>vis(n+1,0),v(n+1,0);
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y; 
        adj[x].push_back(y);
        adj[y].push_back(x);
        ind[x]++;ind[y]++;
    }
    queue<int>q;
    for(int i=1;i<=n;i++)if(ind[i]==1)q.push(i);
    while(!q.empty()){
        int i=q.front();q.pop();
        vis[i]=1;
        for(auto it:adj[i]){
            ind[it]--;
            if(ind[it]==1)q.push(it);
        }
    }
    if(a==b){
        cout<<"NO\n";return;
    }
    if(!vis[b]){
        cout<<"YES\n";return;
    }
    
    int c,cb,ca;
    queue<pair<int,int>>qu;
    qu.push({b,0});
    while(!qu.empty()){
        int i=(qu.front()).first,d=(qu.front()).second;qu.pop();
        if(!vis[i]){
            c=i;cb=d;break;
        }
        v[i]=1;
        for(auto it:adj[i]){
            if(!v[it])qu.push({it,d+1});
        }
    }
    while(!qu.empty())qu.pop();
    for(int i=0;i<=n;i++)v[i]=0;
    qu.push({a,0});
    while(!qu.empty()){
        int i=(qu.front()).first,d=(qu.front()).second;qu.pop();
        if(i==c){
            ca=d;break;
        }
        v[i]=1;
        for(auto it:adj[i]){
            if(!v[it])qu.push({it,d+1});
        }
    }
    if(cb<ca){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
 
}
int main(){
    int t; cin>>t;
    while(t--)solve();
}