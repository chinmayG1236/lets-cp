#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,st,en;cin>>n>>st>>en;
    if(n==1){
        cout<<"1\n";return;
    }
    vector<vector<int>>adj(n+1);
    vector<int>ind(n+1,0);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        ind[x]++;ind[y]++;
    }
    vector<int>ans;
    queue<int>q;
    for(int i=1;i<=n;i++)if(ind[i]==1)q.push(i);
    while(!q.empty()){
        int i=q.front(); q.pop();
        if(i==en){
            if(q.empty()){
                ans.push_back(en);
                break;
            }
            else{
                q.push(en);
            }
            continue;
        }
        ans.push_back(i);
        for(auto it:adj[i]){
            ind[it]--;
            if(ind[it]==1)q.push(it);
        }

    }
    for(auto it:ans)cout<<it<<" ";
    cout<<"\n";


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}