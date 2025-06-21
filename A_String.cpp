#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    
    string s; cin>>s;
    int n=s.size();
    int ct=0;
    for(int i=0;i<n;i++)if(s[i]=='1')ct++;
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}