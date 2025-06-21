#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>primes;
void solve(){
    ll N;cin>>N;
    ll ct=0;
    for(int i=0;i<primes.size();i++){
        ll p1=primes[i];
        ll tmp=p1;
        if(tmp<=100){
            tmp=tmp*tmp;tmp=tmp*tmp;tmp=tmp*tmp;
            if(tmp<=N)ct++;
        }
        ll val=(ll)sqrt((N/(p1*p1)) + 0.0);
        ll ind= upper_bound(primes.begin(),primes.end(),val)-primes.begin()-1;
        ct+= max(0ll,ind-i);
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int sz=1e6 + 1;
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

    solve();
}