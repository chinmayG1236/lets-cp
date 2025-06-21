#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod= 1e9 +7;

void solve(){
    int n; cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int sz=1e5 +1;
    vector<int>dp(sz,0);
    dp[0]=1;
    for(int i=1;i<=sz;i++){
        dp[i]=(2ll*dp[i-1])%mod;
    }
    for(int i=0;i<n;i++){
        cout<<dp[b[i]]<<"\n";
    }
}
int main(){
    solve();
}