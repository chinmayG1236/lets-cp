#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll x,y;cin>>x>>y;
    ll ct=0;
    for(int m=1;m*m<x;m++){
        // double val = sqrtl(((x+0.0)/m -1)*y);
        // ct+= (int)val  - m;
        ll mxv=min(x/m -1,y);
        ll mnv=m+1;
        ct+= max(0ll, mxv-mnv+1); 
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}