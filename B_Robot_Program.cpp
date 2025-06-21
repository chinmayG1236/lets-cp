#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,x,k;cin>>n>>x>>k;
    string s; cin>>s;
    ll w=-1,tp=-1;
    ll ct=0;
    for(int i=0;i<n;i++){
        ll tm=i+1;
        if(s[i]=='L')ct--;
        else ct++;
        if(ct== (-x)){
            w=tm;
            break;
        }
    }
    ct=0;
    for(int i=0;i<n;i++){
        ll tm=i+1;
        if(s[i]=='L')ct--;
        else ct++;
        if(ct==0){
            tp=tm;
            break;
        }
    }
    ll ans=0;
    if(w==-1){
        cout<<"0\n";return;
    }
    ans++;
    if(tp==-1){
        cout<<ans<<"\n";return;
    }
    k-=w;
    ans+= k/tp;
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}