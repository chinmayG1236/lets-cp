#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
 
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    // if(n==1){
    //     if(k>=1){
    //         cout<<b[0]<<"\n";return;
    //     }
    //     else{
    //         cout<<a[0]<<"\n";return;
    //     }
    // }
    ordered_set st;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)v.push_back({a[i],b[i]});
    sort(v.begin(),v.end());
    vector<int>c;
    for(int i=0;i<n;i++){
        c.push_back(a[i]);
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    ll ans=0;
    int ind=0;
    for(int i=0;i<n;i++){
        if(ind>=2*n)break;
        while(c[ind]<=v[i].first){
            ll cost=c[ind];
            ll p=cost*(n-i);
            ll un=st.size()-st.order_of_key(cost);
            if(un<=k){
                p+= un*cost;
                ans=max(p,ans);
            }
            ind++;
        }
        st.insert(v[i].second);
    }
    while(true){
        if(ind>=2*n)break;
            ll cost=c[ind];
            ll p=0;
            ll un=st.size()-st.order_of_key(cost);
            if(un<=k){
                p+= un*cost;
                ans=max(p,ans);
            }
            ind++;
        }
 
    cout<<ans<<"\n";
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}