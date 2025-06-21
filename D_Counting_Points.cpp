#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<int>x(n),r(n);
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)cin>>r[i];

    map<int,int>mp;
    for(int i=0;i<n;i++){
        int s= x[i]-r[i],e= x[i]+r[i];
        for(int p=s;p<=e;p++){
            int y= (int)(sqrtl( 1ll * r[i]*r[i] - 1ll * (p-x[i])*(p-x[i])+0.0));
            mp[p]=max(mp[p],y);
        }
    }
    ll ans=0;
    for(auto &[it,num] : mp){
        ans+= (2*num + 1);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}