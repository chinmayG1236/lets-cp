#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll ans=0;
    multiset<int>st;
    for(int i=0;i<n;i++){
        ans+=a[i]/k; int mod=a[i]%k;
        if(mod!=0)st.insert(mod);
    }
    while(!st.empty()){
        int mod=*st.begin();
        st.erase(st.find(mod));
        auto it = st.lower_bound(k-mod);
        if(it==st.end())continue;
        ans++;
        st.erase(st.find(*it));
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}