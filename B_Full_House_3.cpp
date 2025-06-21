#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    vector<int>a(7);
    for(int i=0;i<7;i++)cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<7;i++)mp[a[i]]++;
    vector<int>v;
    for(auto &[val,f] : mp)v.push_back(f);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    if(v.size()==1){
        cout<<"No\n"; return;
    }
    if(v[0]>=3 && v[1]>=2){
        cout<<"Yes\n"; return;
    }
    cout<<"No\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}