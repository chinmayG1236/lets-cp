#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    ll A,B,C,k;cin>>A>>B>>C>>k;
    ll ct=0;
    ll s=1;for(int i=0;i<A-1;i++)s*=10;
    ll e=1;for(int i=0;i<A;i++)e*=10; e--;
    ll sb=1;for(int i=0;i<B-1;i++)sb*=10;
    ll eb=1;for(int i=0;i<B;i++)eb*=10; eb--;
    ll sc=1;for(int i=0;i<C-1;i++)sc*=10;
    ll ec=1;for(int i=0;i<C;i++)ec*=10; ec--;
    for(ll a=s;a<=e;a++){
        if(min(ec-a,eb)<=0)continue;
        ll num=min(ec-a,eb)-max(sc-a,sb)+1; num=max(num,0ll);
        if(ct+num<k){
            ct+=num;
            continue;
        }
        ll b= max(sc-a,sb)+(k-ct-1);
        ll c= b+a;
        cout<<a<<" + "<<b<<" = "<<c<<"\n";return;
    }
    
    cout<<"-1\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}