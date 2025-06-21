#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    ll n,k;cin>>n>>k;
    int i;
    for(i=61;i>=0;i--){
        if((n&(1ll<<i))>0)break;
    }
    if(k==1){
        cout<<n<<"\n";return;
    }
    ll num=0;
    for(int j=0;j<=i;j++){
        num= (num|(1ll<<j));
    }
    cout<<num<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}