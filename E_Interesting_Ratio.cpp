#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>primes;

void solve(){
    int n;cin>>n;
    ll ans=0;
    for(int a=1;a< n/2 + 3;a++){
        int val= n/a;
        int ind= (upper_bound(primes.begin(),primes.end(),val)-primes.begin())-1;
        ans+= (ind+1);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sz=1e7;
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