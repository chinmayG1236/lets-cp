#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define pb        push_back
#define fi        first
#define se        second
#define SZ(x)     ((int)(x).size())
#define all(x)    (x).begin(), (x).end()
#define popcnt(x) __builtin_popcountll(x)
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,1e16));
    for(int j=0;j<=k;j++)dp[0][j]=0;
    ll summ=0;
    for(int i=1;i<=n;i++){
        summ+=a[i]; dp[i][0]=summ;
    }
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=k;j++)dp[i][j]=min(dp[i][j],dp[i][j-1]);
        map<int,int>mp;
        for(int p=i;p>=1;p--){
            mp[a[p]]++;
            ll f=(*mp.begin()).second,t=i-p+1,op=t-f,val=(*mp.begin()).first;
            if(t>k+1)break;
            for(int j=0;j<=k;j++){
                if(j+op>k)break;
                dp[i][op+j]=min(dp[i][op+j],dp[p-1][j]+t*val);
            }
            // for(int j=1;j<=k;j++)dp[i][j]=min(dp[i][j],dp[i][j-1]);

        }
    }
    cout<<dp[n][k]<<"\n";
    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=k;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}