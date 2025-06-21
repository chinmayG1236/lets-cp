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
    int l,r,k;cin>>l>>r>>k;
    if(k>9){
        cout<<"0\n"; return;
    }
    int x=9/k;
    x++;
    int ans= (exp(x,r)-exp(x,l)+mod)%mod;
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}