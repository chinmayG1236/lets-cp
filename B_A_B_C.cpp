#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    int n=s.size();
    int ct=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]!='A' || s[j]!='B')continue;
            int k= j+(j-i);
            if(k<n && s[k]=='C')ct++;
        }
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}