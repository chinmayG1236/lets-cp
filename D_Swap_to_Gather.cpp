#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    vector<ll>v;
    ll ss=0,ct=0,sp=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            v.push_back(i);
            ss+=i;
        }
    }
    if(v.size()==0 || v.size()==n){
        cout<<"0\n";return;
    }
    
    ll j=0;
    ll ans=LLONG_MAX;
    ll x=v.size();
    ans= ss-((x*(x-1))/2);
    for(ll i=0;i<n-1;i++){
        if(j<v.size())if(i==v[j]){
            sp+=i;ss-=i;j++;ct++;
        }
        if(j>=v.size()){
            ll ta=ct*i -(((ct-1)*ct)/2 + sp);
            ans=min(ans,ta);continue;
        }
        
        ll m=v.size()-j;
        ll ta= ss-(m*i + (m*(m+1))/2)+ ct*i -(((ct-1)*ct)/2 + sp);
        // cout<<ta<<" ";
        ans=min(ans,ta);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}