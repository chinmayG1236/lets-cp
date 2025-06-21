#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 

void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    vector<int>b(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    int ct=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[b[i]]=i;
    }
    for(int i=1;i<=n;i++){
        if(mp.find(a[i])==mp.end()){
            cout<<"NO\n";return;
        }
    }
    for(int i=1;i<=n;i++){
        // int ind=mp[a[i]];
        // int o=b[i],r=a[i];
        if((a[i]!=b[i])){
            int ind=mp[a[i]];
            ct++;
            mp[b[i]]=ind;
            b[ind]=b[i];
        }
        
    }
    if(ct%2==0){
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