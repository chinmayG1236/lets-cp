#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n;cin>>n;
    vector<int>a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];a[i]+=a[i-1];
    }
    int m;cin>>m;
    vector<int>b(m+1,0);
    for(int i=1;i<=m;i++){
        cin>>b[i];b[i]+=b[i-1];
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            ans=max(ans,a[i]+b[j]);
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