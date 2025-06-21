#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=1000000000+7;
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    ll mc=0,rc=0,sz=200001;
    for(int i=0;i<n;i++){cin>>a[i]; if(a[i]==1)mc++; else rc++;};
    vector<ll>m(sz,0),r(sz,0); m[1]=mc; r[1]=rc;
    for(int i=2;i<=mc;i++){
        m[i]=((m[i-1]*(mc-(i-1)))/i)%mod;
    }
    for(int i=2;i<=rc;i++){
        r[i]=((m[i-1]*(rc-(i-1)))/i)%mod;
    }
    ll ans=0;
    for(int i=k/2 +1;i<=k;i++){
        ans= (ans + ( m[i]*r[k-i] ))%mod;
    }
    cout<<ans<<"\n";

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}