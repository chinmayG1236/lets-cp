
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        a[i]-=b[i];
    }
    sort(a.begin(),a.end());
    ll ans=0;
    int j=n-1;
    for(int i=0;i<n;i++){
        while(j>=0 && a[j]+a[i]>0){
            j--;
        }
        if(j<=i-1)ans+=(n-j-2);
        else ans+=(n-j-1);
    }
    ans/=2;
    cout<<ans<<"\n";
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}