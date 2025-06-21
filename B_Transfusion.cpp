#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    for(auto it:a)sum+=it;
    if(sum%n != 0){
        cout<<"NO\n";return;
    }
    ll val=sum/n;
    ll s1=0,s2=0;
    ll c1=0,c2=0;
    for(int i=0;i<n;i+=2){s1+=a[i];c1++;}
    for(int i=1;i<n;i+=2){s2+=a[i];c2++;}
    if(s1 != (c1*val)){
        cout<<"NO\n";return;
    }
    if(s2 != (c2*val)){
        cout<<"NO\n";return;
    }
    cout<<"YES\n";
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}