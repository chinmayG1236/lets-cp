#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>primes;
void solve(){
    ll p,q;cin>>p>>q;
    if(q>p){
        cout<<p<<"\n"; return;
    }
    ll ans=1;
    for(int i=0;i<primes.size();i++){
        ll x=primes[i];
        if(q%x !=0)continue;
        ll tmp=p;
        while(tmp%q == 0 && tmp>0){
            tmp/=x;
        }
        ans=max(ans,tmp);
    }
    cout<<ans<<"\n";
}
int main(){
    int sz=1e5;
    vector<bool>isp(sz,1);
    for(int i=2;i*i<sz;i++){
        if(!isp[i])continue;
        for(int j=i*i;j<sz;j+=i){
            isp[j]=0;
        }
    }
    for(int i=2;i<sz;i++){
        if(isp[i])primes.push_back(i);
    }
    
    int t;cin>>t;
    while(t--)solve();
}