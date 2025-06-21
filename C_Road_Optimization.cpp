#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,l,k;cin>>n>>l>>k;
    vector<ll>d(n+1),a(n+1);
    for(int i=1;i<=n;i++)cin>>d[i];
    for(int i=1;i<=n;i++)cin>>a[i];
    d.push_back(l);a.push_back(0);
    vector<vector<ll>>dp(n+2,vector<ll>(k+1,LONG_MAX));
    ll ans=LONG_MAX;
    for(int op=0;op<=k;op++){
        dp[1][op]=0;
    }
    for(int i=1;i<=n;i++){
        for(int op=0;op<=k;op++){
            for(int exop=0;exop+op<=k;exop++){
                int m=i+(exop+1);
                if(m> n+1)break;
                dp[m][op+exop]=min(dp[m][op+exop],dp[i][op]+a[i]*(d[m]-d[i]));
                if(m==n+1){ans=min(ans,dp[m][op+exop]);}
            }
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}