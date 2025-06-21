#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>r(n+1);
    for(int i=1;i<=n;i++)cin>>r[i];
    int ct=0;
    map<int,set<int>>mp;
    for(int i=1;i<=n;i++){
        mp[r[i]].insert(i);
    }
    vector<int>z;
    for(int i=1;i<=n;i++){
        if(mp[i].size()==0)z.push_back(i);
    }
    while(true){
        
        if(z.size()==0 || z.size()==n)break;
        ct++;
        vector<int>v;
        for(auto it:z){
            mp[r[it]].erase(it);
            if(mp[r[it]].size()==0)v.push_back(r[it]);
        }
        z=v;
    }
    cout<<ct+2<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}