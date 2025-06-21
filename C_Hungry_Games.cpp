#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,x;cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>sum(n,0);sum[0]=a[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];
    }
    vector<ll>dp(n+2,0);
    for(int i=n-1;i>=0;i--){
        ll val=x; if(i>0)val+=sum[i-1];
        ll ind=upper_bound(sum.begin(),sum.end(),val)-sum.begin();
        dp[i]=ind-i+dp[ind+1];
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=dp[i];
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();

}