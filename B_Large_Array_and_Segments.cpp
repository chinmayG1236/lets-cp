#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,k,x;cin>>n>>k>>x;
    vector<ll>a(n);
    ll sa=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        sa+=a[n-1-i];
        if(sa>=x){
            cout<< n*k - i <<"\n"; return;
        }
    }
    ll y= (x/sa);
    if(x%sa !=0)y++;
    ll ans=0;
    if(y>k){
        cout<<"0\n"; return;
    }
    ans+= (k-y)*n;
    ll sum=(y-1)*sa;
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        if(sum>=x){
            ans+=(i+1);
            break;
        }
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}