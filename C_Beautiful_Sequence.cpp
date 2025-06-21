#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=998244353;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=0,ct=0,ones=0;
    for(int i=0;i<n;i++){
        if(a[i]==3){
            ans+=ct;
            ans%=mod;
        }
        if(a[i]==1) {ones++; ones%=mod;}
        if(a[i]==2){
            ct = (2*ct + ones)%mod;
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