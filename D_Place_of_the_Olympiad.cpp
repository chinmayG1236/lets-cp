#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m,k;cin>>n>>m>>k;
    ll ans=m;
    ll s=1,e=m;
    while(s<=e){
        ll x= (s+e)/2;
        ll b= (m+1)/(x+1);
        ll sir= b*x;
        if(b*(x+1) < m)sir+= m%(x+1);
        ll ts = (sir)*n;
        if(ts>=k){
            ans=x;
            e=x-1;
        }
        else s=x+1;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}