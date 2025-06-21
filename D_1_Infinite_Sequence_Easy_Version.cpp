#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>fx(1e6);
ll N;
ll fn(ll m,ll &pd,vector<ll>&a){
    if(m==0)return 0ll;
    if(m<=N){
        return a[m];
    }
    ll x=m/2;
    if(x<=N){
        return fx[x];
    }
    if(x%2==0){
        return (fn(x,pd,a)^pd);
    }
    return pd;
}

void solve(){
    ll n,l,r;cin>>n>>l>>r;
    vector<ll>a(n+2,0ll);
    for(int i=1;i<=n;i++)cin>>a[i];
    ll pd=0;
    ll hx=0;
    
    for(int i=1;i<=n;i++){
        pd= (pd^a[i]);
    }
    if(n%2==0){
        for(int i=1;i<= (n+1)/2 ;i++){
            hx = (hx^a[i]);
        }
        pd=(pd^hx);a[n+1]=hx;n++;
    }
    else a.pop_back();
    N=n;
    ll xorr=0;
    for(int i=1;i<=n;i++){
        xorr=(xorr^a[i]);
        fx[i]=xorr;
    }
    ll ans=fn(l,pd,a);
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}