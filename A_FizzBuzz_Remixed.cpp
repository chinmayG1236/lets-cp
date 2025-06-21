#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    if(n==0 || n==1 || n==2){
        cout<<n+1<<"\n"; return;
    }
    ll x= n/15;
    ll ans= x*3;
    if(15*x <=n)ans++;
    if(15*x +1 <=n)ans++;
    if(15*x +2 <=n)ans++;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}