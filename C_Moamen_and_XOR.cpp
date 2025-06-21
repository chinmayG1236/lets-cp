#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod= 1e9 + 7;

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
    ll n,k;cin>>n>>k;
    ll ans=1,t=1;
    for(int d=1;d<=k;d++){
        ll t= exp(exp(2,d-1),n);
        ll na= (exp(2,n-1)*ans)%mod;
        if(n%2==0){
            na+= (t-ans+mod)%mod;
        }
        else{
            na+= ans;
        }
        ans= na%mod;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}