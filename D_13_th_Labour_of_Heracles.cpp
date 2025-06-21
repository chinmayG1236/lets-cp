#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<ll>w(n+1),ind(n+1,0);
    for(int i=1;i<=n;i++)cin>>w[i];
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        ind[x]++;ind[y]++;
    }
    multiset<ll>st;
    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=(ind[i])*w[i];
        for(int j=0;j<ind[i]-1;j++){
            st.insert(w[i]);
        }
    }
    vector<ll>ans(n,0);
    ans[n-1]=sum;
    for(int i=n-2;i>=1;i--){
        ll x=*st.begin(); st.erase(st.begin());
        sum-=x;
        ans[i]=sum;
    }
    for(int i=1;i<=n-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}