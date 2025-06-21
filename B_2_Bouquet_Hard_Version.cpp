#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n),c(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>c[i];
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)v.push_back({a[i],c[i]}); 
    sort(v.begin(),v.end());
    ll ans=0; ans=(v[n-1].first *(min(m/(v[n-1].first),v[n-1].second)));
    for(int i=0;i<n-1;i++){
        ll a=v[i].first,x=v[i].second,y=v[i+1].second;
        ans=max(ans,a*(min(m/a,x)));
        if(v[i+1].first != a+1)continue;
        ll s= a*(min(x,m/a)); x-=min(x,m/a);
        ll f=m-s;
        s+= (a+1)*(min(y,f/(a+1))); y-=min(y,f/(a+1));
        ll d= (m-s)-min(v[i].second-x,y);
        ans=max(ans,min(m,m-d)); 
    }
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}