#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=1e9 + 7;
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>v(64,0);
    for(int i=0;i<n;i++){
        vector<ll>tmp(64,0);
        for(int j=0;j<=63;j++){
            int val=(j&a[i]);
            tmp[val]+=v[j];
        }
        for(int j=0;j<=63;j++){
            v[j]+=tmp[j]; v[j]%=mod;
        }
        v[a[i]]++;v[a[i]]%=mod;
    }
    ll ans=0;
    for(int j=0;j<=63;j++){
        int ct=0;
        for(int i=0;i<7;i++){
            if((j&(1<<i)))ct++;
        }
        if(__builtin_popcount(j)==k){
            ans+=v[j];ans%=mod;
        }
    }
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}