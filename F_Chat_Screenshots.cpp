#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    vector<vector<int>>adj(n+1);
    vector<int>ind(n+1,0);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++)cin>>a[j];
        for(int i=1;i<n-1;i++){
            adj[a[i]].push_back(a[i+1]);
            ind[a[i+1]]++;
        }
    }
    if(n<=2){
        cout<<"YES\n";return;
    }
    queue<int>q;
    for(int i=1;i<=n;i++)if(ind[i]==0)q.push(i);
    vector<int>ans;
    while(!q.empty()){
        int node=q.front(); q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            ind[it]--;
            if(ind[it]==0)q.push(it);
        }
    }
    if(ans.size()==n){
        cout<<"YES\n";
    }
    else cout<<"NO\n";


    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}