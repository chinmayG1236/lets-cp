#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ct=0;
    for(auto it:a)if(it==0)ct++;
    if(ct==n){
        cout<<"0\n";return;
    }
    if(ct==0){
        cout<<"1\n";return;
    }
    int sz=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)sz++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==0)sz++;
        else break;
    }
    if(sz==ct){
        cout<<"1\n";return;
    }
    cout<<"2\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}