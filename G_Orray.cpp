#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>ans;vector<bool>vis(n,0);int ind;int tmp=-1;
    for(int i=0;i<n;i++){
        if(a[i]>=tmp){
            tmp=a[i];ind=i;
        }
    } 
    
    vis[ind]=1; ans.push_back(a[ind]);
    for(int x=0;x<33;x++){
        if(ans.size()==n)break;
        int val=0;
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            if((tmp|a[i])>=val){
                val=(tmp|a[i]); 
                ind=i;
            }
        }
        ans.push_back(a[ind]); tmp=val; vis[ind]=1;
    }
    for(int i=0;i<n;i++){
        if(vis[i]==0)ans.push_back(a[i]);
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}