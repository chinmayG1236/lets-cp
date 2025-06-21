#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=1e9 + 7;

void solve(){
    int a,b;cin>>a>>b;
    if(a==0 && b!=0){
        cout<<"0\n"; return;
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
    cout<<ans<<"\n";
}    
int main(){
    int t;cin>>t;
    while(t--)solve();
}