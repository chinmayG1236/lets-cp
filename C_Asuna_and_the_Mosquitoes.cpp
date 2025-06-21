#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll odd=0,sum=0,maxn=0;
    for(int i=0;i<n;i++){
        if(a[i]%2 == 1)odd++;
        sum+=a[i];
        maxn=max(maxn,a[i]);
    }
    if(odd==n || odd==0){
        cout<<maxn<<"\n"; return;
    }
    cout<<sum-(odd-1)<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}