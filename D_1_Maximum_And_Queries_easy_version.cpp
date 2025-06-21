#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    while(q--){
        ll k; cin>>k;
        a=b;
        ll tmp=0,x=0;
        for(int j=60;j>=0;j--){
            ll tar=(tmp|(1ll<<j));
            ll op=0;
            for(int i=0;i<n;i++){
                if((a[i] & (1ll<<j))>0)continue;
                op+=(tar-a[i]);
                if(op>=1e18)break;
            }
            if(op<=k){
                for(int i=0;i<n;i++){
                    if((a[i] & (1ll<<j))>0)continue;
                    a[i]=tar;
                }
                k-=op;
                tmp=tar;    
            }
            else{
                for(int i=0;i<n;i++){
                    if((a[i] & (1ll<<j))){
                        a[i]= (a[i]^(1ll<<j));
                    }
                }
            }
        }
        cout<<tmp<<"\n";
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}