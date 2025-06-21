#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,q;cin>>n>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll pos=a[0],neg=0;
    for(int i=1;i<n;i++){
        ll npos= neg+a[i];
        ll nneg= pos-a[i];
        pos=max(pos,npos);
        neg=max(neg,nneg);
    }
    cout<<max(neg,pos)<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}