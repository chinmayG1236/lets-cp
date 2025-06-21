#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=998244353;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<ll>sdo(31,0),sde(31,0),no(31,0),ne(31,1),p(31,0);
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<31;j++){
            if((a[i]&(1<<j))>0)p[j]++;
            bool e=0; if(p[j]%2 ==0)e=1;

            if(e){
                ans+= (((no[j]*i - sdo[j])%mod *(1ll<<j))%mod);
            }
            else{
                ans+= (((ne[j]*i - sde[j])%mod *(1ll<<j))%mod);
            }
            ans%=mod;
            if(e){
                sde[j]+=i;
                ne[j]++;
            }
            else{
                sdo[j]+=i;
                no[j]++;
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}