#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll s1=0,s2=0;
    for(int i=0;i<n;i++){
        if(a[i]<0)s2+=abs(a[i]);
    }
    ll ans=s2;
    for(int i=0;i<n;i++){
        if(a[i]>0)s1+=a[i];
        else s2+=a[i];
        ans=max(ans,s1+s2);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}