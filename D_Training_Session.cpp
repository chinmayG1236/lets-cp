#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    map<ll,ll>m1,m2;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        m1[a[i]]++;m2[b[i]]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ll x=a[i],y=b[i];
        if(m1[x]>1 && m2[y]>1)ans+= (m1[x]-1)*(m2[y]-1);
    }
    ans=((n-2)*(n-1)*n)/6 - ans;
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}