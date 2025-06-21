#include<bits/stdc++.h>
using namespace std;
using ll=long long;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int mxd=0,l=0,r=0;
    
    for(int i=0;i<n;i++){
        ordered_set st;
        st.insert(a[i]);
        for(int j=i+1;j<n;j++){
            int x=a[i];
            st.insert(a[j]);
            int iv= st.order_of_key(x);
            int ev= st.order_of_key(INT_MAX) - st.order_of_key(x+1);
            int d= iv-ev;
            if(d>mxd){
                mxd=d; l=i; r=j;
            }
        }
        
    }
    l++;r++;
    cout<<l<<" "<<r<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}