#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int to=0; for(auto it:a)if(it==1)to++;
    int mid=0;
    int ct=0;
    int ans=0;
    for(auto it:a){
        if(it==1)ct--;
        else ct++;
        ans=max(ans,to+(ct-mid));
        mid=min(mid,ct);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}