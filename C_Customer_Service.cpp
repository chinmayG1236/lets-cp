#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<vector<int>>a(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v;
    for(int i=1;i<=n;i++){
        int ct=0;
        for(int j=n;j>=1;j--){
            if(a[i][j]==1)ct++;
            else break;
        }
        v.push_back(ct);
    }
    sort(v.begin(),v.end());
    int ct=0,r=1;
    for(int i=0;i<n;i++){
        if(v[i]>=r){
            ct=r; r++;
        }
    }
    // for(auto it:v)cout<<it<<" ";
    // cout<<"\n";
    if(ct==n){
        cout<<n<<"\n";return;
    }
    else{
        cout<<ct+1<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}