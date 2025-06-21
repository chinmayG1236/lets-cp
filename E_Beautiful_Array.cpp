#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<ll,vector<ll>>mp;
    for(int i=0;i<n;i++){
        ll mod=a[i]%k;
        mp[mod].push_back(a[i]);
    }
    ll ct=0;
    // bool odd= n%2==1 ? 1 : 0;
    bool odd=1; if(n%2==0)odd=0;
    ll ov=0;
    for(auto it:mp){
        sort((it.second).begin(),(it.second).end());
        ll sz= (it.second).size();
        // cout<<sz<<"\n";
        if(sz%2==1){
            if(!odd){
                cout<<"-1\n";return;
            }
            ov++;
            if(ov>1){
                cout<<"-1\n";return;
            }
            ll s=0,tmp=0,val=LLONG_MAX;
            for(int i=sz-1;i>=2;i-=2){
                s+=((it.second)[i]-(it.second)[i-1])/k;
            }
            for(int i=0;i<sz;i+=2){
                if(i>0)s-= ((it.second)[i]-(it.second)[i-1])/k;
                val=min(val,tmp+s);
                if(i<n-2)tmp+=  ((it.second)[i+1]-(it.second)[i])/k;
            }
            ct+=val;
            
        }
        else{
            for(int i=0;i<sz;i+=2){
                ct+= ((it.second)[i+1]-(it.second)[i])/k;
            }
        }
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}