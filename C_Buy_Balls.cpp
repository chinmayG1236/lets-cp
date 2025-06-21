#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>b(n),w(m);
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<m;i++)cin>>w[i];
    ll ans=0,mxw=0,sw=0,sb=0;
    sort(b.begin(),b.end());
    sort(w.begin(),w.end());
    reverse(b.begin(),b.end());
    reverse(w.begin(),w.end());
    for(int i=0;i<n;i++){
        sb+=b[i];
        if(i<m){
            sw+=w[i];
            mxw=max(mxw,sw);
        }
        ans=max(ans,sb+mxw);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}