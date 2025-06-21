#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll sum=0;ll val=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum<=k)val=sum;
    }
    cout<<k-val<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}