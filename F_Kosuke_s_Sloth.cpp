#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod= 1e9 +7;

void solve(){
    ll n,k;cin>>n>>k;
    if(k==1){
        cout<< n%mod <<"\n";return;
    }
    // ll p2=1,p1=1;
    // ll f1=0,f2=0;
    ll r1=1,r2=1;
    
    ll x;
    for(int i=3;i<1e8;i++){
        ll r= (r1+r2)%k;
        
        if(r==0){
            x=i;break;
        }
        swap(r1,r2);
        r1=r;
    }
    ll ans= ((n%mod) * x)%mod;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}