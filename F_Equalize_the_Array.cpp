#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++)mp[a[i]]++;
    vector<int>v;
    for(auto it:mp){
        v.push_back(it.second);
    }
    sort(v.begin(),v.end());
    ll ans=LONG_LONG_MAX;
    ll sf=0,se=0;
    int m=v.size();
    for(int i=0;i<m;i++){
        se+=v[i];
    }
    for(int i=0;i<v.size();i++){
        
        ll tmp= sf + se-(m-i)*v[i];
        ans=min(ans,tmp);
        sf+=a[i];
        se-=a[i];
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}