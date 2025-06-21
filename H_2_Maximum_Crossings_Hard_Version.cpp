#include<bits/stdc++.h>
using namespace std;
using ll=long long;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;


void solve(){
    
    ordered_set st;
    // st.insert(1);st.insert(3);st.insert(5);st.insert(7);st.insert(9);
    // cout<<(st.find_by_order(5)==end(st));
    // st.insert(1);
    // st.insert(1);
    // st.insert(2);
    // st.erase(--st.find(1));
    // cout<<st.order_of_key(2);
 
    st.insert(1);
    st.insert(1);
    cout<<st.size();


}
int main(){
    solve();
}