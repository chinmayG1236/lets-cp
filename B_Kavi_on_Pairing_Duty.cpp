#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>fac(1e6+1,0);
int mod=998244353;
void solve(){
    ll n;cin>>n;
    
    vector<ll>dp(1e6+1,0);
    dp[1]=1;dp[2]=3;
    for(int i=3;i<=1e6;i++){
        dp[i]= (2*dp[i-1]-fac[i-1]+fac[i]+mod)%mod;
    }
    cout<<dp[n]<<"\n";
    // for(int i=1;i<=10;i++)cout<<dp[i]<<" ";


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1;i<=1e6;i++){
        for(int j=1;j*i<=1e6;j++){
            fac[i*j]++;
        }
    }
    solve();
}