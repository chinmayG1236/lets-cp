#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(m);
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll ans=0;
    
    for(ll i=1;i<=n-1;i++){
        ll x = m-(lower_bound(a.begin(),a.end(),i)-a.begin());
        ll y = m-(lower_bound(a.begin(),a.end(),n-i)-a.begin());
        if(x<y)swap(x,y);
        ans+=((x-y)*y + y*(y-1));
    }
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}