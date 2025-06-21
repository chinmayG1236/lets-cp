#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,x;cin>>n>>x;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    ll st=0;
    ll tm=0;
    for(int i=n-1;i>=0;i--){
        tm++;
        ll score= (a[i]*tm);
        if(score>=x){
            st++; tm=0;
        }
    }
    cout<<st<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}