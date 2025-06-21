#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n; cin>>n;
    // if(n==3){
    //     cout<<"-1\n"; return;
    // }
    int f,l;
    for(int i=30;i>=0;i--){
        if((n & (1<<i)) !=0){
            f=i; break;
        }
    }
    for(int i=0;i<31;i++){
        if((n & (1<<i)) !=0){
            l=i; break;
        }
    }
    int xorr=0;
    for(int i=f;i>=0;i--){
        if((n & (1<<i))==0){
            xorr = (xorr ^ (1<<i));
        }
    }
    xorr=(xorr^(1<<l));
    if(f==l || xorr==1){
        cout<<"-1\n";return;
    }
    cout<<xorr<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}