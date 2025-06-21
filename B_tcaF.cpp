#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    ll fac; cin>>fac;
    ll i=1;
    while(fac>1){
        fac/=i;
        if(fac==1)break;
        i++;
    }
    cout<<i<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}