#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int sz=2*100000;
vector<ll>v(sz+1,0);

void solve(){
    ll l,r;cin>>l>>r;
    ll ans=0;
    ans=v[r]-v[l-1];
    ans+=(v[l]-v[l-1]);  
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    v[0]=0;
    for(int i=1;i<=sz;i++){
        ll ct=0,x=i;
        while(x>0){
            ct++;x=x/3;
        }
        v[i]=ct+v[i-1];
    }
    while(t--)solve();
}