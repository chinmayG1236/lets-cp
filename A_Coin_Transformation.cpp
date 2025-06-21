#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;cin>>n;
    ll y=1;
    while(n>3){
        y*=2;
        n/=4;
    }
    cout<<y<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}