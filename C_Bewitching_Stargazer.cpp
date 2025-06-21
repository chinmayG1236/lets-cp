#include<bits/stdc++.h>
using namespace std;
using ll=long long;
pair<ll,ll> fn(ll l,ll r,ll &k){
    ll num=r-l+1;

    if(num<k)return {0,0};
    ll m=l+ (r-l)/2;
    pair<ll,ll>pr;
    if(num%2==0)pr=fn(l,m,k);
    else pr=fn(l,m-1,k);
    ll s=pr.first,ct=pr.second;
    ll ns,nct;
    if(num%2==0){
        ns= m*ct + (m+1)*ct;
        nct=2*ct;
    }
    else{
        ns=2*m*ct +m;
        nct=2*ct +1;
    }
    return {ns,nct};
}

void solve(){
    ll n,k;cin>>n>>k;
    
    cout<<fn(1,n,k).first<<"\n";
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}