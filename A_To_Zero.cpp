#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    int ans=0;
    if(n%2==1){
        ans++; n-=k;
    }
    if(n<=0){
        cout<<ans<<"\n"; return;
    }
    ans+= n/(k-1);
    if(n%(k-1) != 0)ans++;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}