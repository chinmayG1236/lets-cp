#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=0;
    if(k==1){
        ans=a[0]+a[n-1];
        ll maxe=0;
        for(int i=1;i<n-1;i++){
            maxe=max(maxe,a[i]);
        }
        ans=max(ans,max(a[0],a[n-1])+maxe);
        cout<<ans<<"\n"; return;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<k+1;i++){
        ans+=a[i];
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}