#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>s(n+1,0),f(n+1,0);
    ll c1=0,c2=0;
    for(int i=0;i<n;i++){
        s[a[i]]++;
        if(s[a[i]]==1)c2+=1;
    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
        f[a[i]]++;
        s[a[i]]--;
        if(f[a[i]]==1)c1+=1;
        if(s[a[i]]==0)c2-=1;
        ans=max(ans,c1+c2);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}