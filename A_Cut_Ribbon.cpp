#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n,a,b,c;cin>>n>>a>>b>>c;
    vector<int>dp(n+1+a+b+c,0);
    dp[a]=1;dp[b]=1;dp[c]=1;
    for(int i=1;i<=n;i++){
        if(dp[i]==0)continue;
        dp[i+a]=max(dp[i+a],1+dp[i]);
        dp[i+b]=max(dp[i+b],1+dp[i]);
        dp[i+c]=max(dp[i+c],1+dp[i]);
    }
    
    cout<<dp[n]<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   solve();
}