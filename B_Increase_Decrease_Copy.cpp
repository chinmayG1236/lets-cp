#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<ll>a(n),b(n+1);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<=n;i++)cin>>b[i];
    ll ans=0;
    ll x=b[n];
    ll c=0;
    ll d=INT_MAX;
    for(int i=0;i<n;i++){
        ll s=min(a[i],b[i]);
        ll l=max(a[i],b[i]);
        if(x>=s && x<=l)c=1;
        d=min(abs(x-s),abs(x-l));
        ans+=(l-s);
    }
    ans++;
    if(c==0ll)ans+=d;
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}