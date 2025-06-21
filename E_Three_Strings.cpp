#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string a,b,c; cin>>a>>b>>c;
    int n=a.size(),m=b.size();
    a="."+a; b="."+b; c="."+c;
    
    vector<vector<int>>dp(n+1,vector<int>(m+1,INT_MAX));
    dp[0][0]=0;
    for(int j=1;j<=m;j++){
        dp[0][j]=dp[0][j-1];
        if(c[j]!=b[j])dp[0][j]++;
    }
    for(int i=1;i<=n;i++){
        dp[i][0]=dp[i-1][0];
        if(c[i]!=a[i])dp[i][0]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int val;

            val=dp[i-1][j];
            if(c[i+j]!=a[i])val++;
            dp[i][j]=min(dp[i][j],val);

            val=dp[i][j-1];
            if(c[i+j]!=b[j])val++;
            dp[i][j]=min(dp[i][j],val);
        }
    }
    cout<<dp[n][m]<<"\n";
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=m;j++)cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}