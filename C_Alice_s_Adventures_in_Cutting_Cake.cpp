#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,m,v;cin>>n>>m>>v;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>s(m+1,-1),e(m+1,-1);
    ll hp=0;ll t=0;
    for(int i=0;i<n;i++){
        if(hp>=m)break;
        t+=a[i];
        if(t>=v){
            hp++;t=0;
            s[hp]=i;
        }
    }
    hp=0;t=0;
    for(int i=n-1;i>=0;i--){
        if(hp>=m)break;
        t+=a[i];
        if(t>=v){
            hp++;t=0;
            e[hp]=i;
        }
    }
    vector<ll>pre(n,0); pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]; pre[i]+=pre[i-1];
    }
    ll ans=-1;
    if(e[m]!=-1){
        if(e[m]==0)ans=0;
        else ans=max(ans,pre[e[m]-1]);
    }
    if(s[m]!=-1){
        ans=max(ans,pre[n-1]-pre[s[m]]);
    }

    for(int i=1;i<=m-1;i++){
        if(s[i]!=-1 && e[m-i]!=-1)ans=max(ans,pre[e[m-i]-1]-pre[s[i]]);
    }
    if(ans>1e16){
        cout<<"-1\n";return;
    }
    cout<<ans<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}