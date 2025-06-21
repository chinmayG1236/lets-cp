#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){cin>>b[i];b[i]--;}
    vector<ll>pre(n,0);
    pre[0]=a[0];
    for(int i=1;i<n;i++)pre[i]= a[i]+pre[i-1];
    set<pair<ll,ll>>st;
    vector<ll>c(n,LLONG_MAX);
    st.insert({0,0}); 
    while(!st.empty()){
        pair<ll,ll>pr=*st.begin(); st.erase(st.begin());
        ll i=pr.second;
        ll cost=pr.first;
        if(c[i]<cost)continue;
        c[i]=cost;
        if(i-1>=0){
            if(cost<c[i-1])st.insert({cost,i-1});
        }
        if(cost+a[i]<c[b[i]])st.insert({cost+a[i],b[i]});
    }
    ll ans=a[0];
    for(int i=0;i<n;i++)ans=max(ans,pre[i]-c[i]);
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}