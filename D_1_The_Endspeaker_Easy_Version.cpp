#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n+1),b(m+1),pre(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=1;i<=n;i++){
        pre[i]=a[i]; pre[i]+=pre[i-1];
    }
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,LLONG_MAX));
    for(int j=1;j<=m;j++)dp[0][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=dp[i][j-1];
            int ind=lower_bound(pre.begin(),pre.end(),pre[i]-b[j])-pre.begin();
            if(dp[ind][j]!=LLONG_MAX && ind<i)dp[i][j]=min(dp[ind][j]+(m-j),dp[i][j]);
        }
    }
    ll ans=LLONG_MAX;
    for(int j=1;j<=m;j++)ans=min(ans,dp[n][j]);
    if(ans==LLONG_MAX)cout<<"-1\n";
    else cout<<ans<<"\n";
    // for(auto it:pre)cout<<it<<" ";
    // cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}