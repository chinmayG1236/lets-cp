#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll ans=LLONG_MAX;
    for(int c=1;c<1e5;c++){
        ll e=1;
        ll tmp=0;
        for(int i=0;i<n;i++){
            tmp+=abs(e-a[i]);
            if(tmp>=ans)break;
            e*=c;
        }
        ans=min(ans,tmp);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}