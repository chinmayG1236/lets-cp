#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int mod=1e9 + 7;
const int maxn=1e6;
ll fac[maxn +1];
ll inv[maxn +1];
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
void cfac(){
    fac[1]=1;
    for(int i=2;i<=1e6;i++){
        fac[i]=fac[i-1]*i % mod;
    }
}
void cinv(){
    inv[maxn]=exp(fac[maxn],mod-2)%mod;
    for(int i=maxn-1;i>=1;i--){
        inv[i]=(inv[i+1]%mod * (i+1)%mod)%mod;
    }
}

void solve(){
    int N,r;cin>>N>>r;
    if(r==0){
        cout<<"1\n"; return;
    }
    
    
    ll ans=  fac[N] * inv[N-r] % mod * inv[r] % mod;
    cout<<ans<<"\n";

    
}
int main(){
    // to precalculate fac till n!mod 
    cfac();
    // to precalculate inv till n!mod 
    cinv();
    int t;cin>>t;
    while(t--)solve();
}