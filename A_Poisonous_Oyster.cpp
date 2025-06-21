#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s,t; cin>>s>>t;
    int tr;
    if(s=="sick" && t=="fine")tr=2;
    if(s=="fine" && t=="sick")tr=3;
    if(s=="fine" && t=="fine")tr=4;
    if(s=="sick" && t=="sick")tr=1;
    cout<<tr<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}