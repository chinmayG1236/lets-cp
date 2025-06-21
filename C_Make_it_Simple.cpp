#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    map<pair<int,int>,int>mp;
    int ct=0;
    for(int i=0;i<m;i++){
        int x,y; cin>>x>>y;
        if(x==y)ct++;
        else mp[{min(x,y),max(x,y)}]++;
    }
    for(auto &[p,val]:mp){
        ct+=(val-1);
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}