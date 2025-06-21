#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void dfs(int i,int p,int d,vector<vector<int>>&adj,int &md){
    if(d>md){
        md=d;
    }
    for(auto it:adj[i]){
        if(it==p)continue;
        dfs(it,i,d+1,adj,md);
    }
}
void solve(){
    int n,a,b;cin>>n>>a>>b;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(n==1){
        cout<<"0\n";return;
    }
    vector<bool>visa(n+1,0),visb(n+1,0);
    visa[a]=1;
    visb[b]=1;
    queue<int>qa,qb; int ct=0; qa.push(a); qb.push(b);
    int ind=0;
    while(a!=b && qa.size() && qb.size()){
        int sz=qa.size();
        for(int k=0;k<sz;k++){
            int i=qa.front(); qa.pop();
            for(auto it:adj[i]){
                if(!visa[it]){
                    visa[it]=1;
                    qa.push(it);
                }
            }
        }
        ct++; 
        sz=qb.size();
        for(int k=0;k<sz;k++){
            int i=qb.front(); qb.pop();
            for(auto it:adj[i]){
                if(visa[it]){
                    ind=it;
                    break;
                }
                if(!visb[it]){
                    visb[it]=1;
                    qb.push(it);
                }
            }
            if(ind)break;
        }
        if(ind)break;
    }

    int f=0,md=0;
    if(a==b)ind=a;
    if(a==b)ct=0;
    dfs(ind,0,0,adj,md);
    cout<<2*(n-1)-md+ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}