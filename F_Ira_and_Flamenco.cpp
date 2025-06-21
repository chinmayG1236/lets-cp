#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod= 1e9 +7;
ll exp(int a,int b){
    if(a==0 && b!=0){
        return 0ll;
    }
    ll ans=1;
    ll x=a;
    while(b>0){
        if(b & 1){
            ans=(ans*x)%mod;
        }
        b=(b>>1);
        x=(x*x)%mod;
    }
    return ans;
}

void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)mp[a[i]]++;
    vector<pair<ll,ll>>v;
    for(auto &[x,y]:mp){
        v.push_back({x,y});
    }
    ll pro=1;
    ll ans=0;
    if(m>v.size()){
        cout<<"0\n";return;
    }
    for(int i=0;i<m;i++){
        pro*=v[i].second;pro%=mod;
    }
    if(v[m-1].first==v[0].first +(m-1) )ans+=pro;
    for(int i=m;i<v.size();i++){
        pro*=(v[i].second);pro%=mod;
        ll x=v[i-m].second;
        pro*= exp(x,mod-2)%mod;pro%=mod;
        if(v[i].first==v[i-m+1].first + m-1){
            ans+=pro;
            ans%=mod;
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