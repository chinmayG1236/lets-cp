#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int d=-1;
    int ind;
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            d=b[i]-a[i];
            ind=i;
            break;
        }
    }
    if(d==-1){
        cout<<"YES\n"; return;
    }
    for(int i=0;i<n;i++){
        if(i==ind)continue;
        if(a[i]-b[i]<d){
            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}