#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0,ans;
    for(int i=0;i<n;i++)sum+=a[i];
    ans=sum;
    sum=0;
    for(int i=1;i<n;i++){
        for(int j=n-1;j>=i;j--){
            a[j]=(a[j]-a[j-1]);
        }
        for(int j=i;j<n;j++)sum+=a[j];
        ans=max(ans,abs(sum));
        sum=0;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}