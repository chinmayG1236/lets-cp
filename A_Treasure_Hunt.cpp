#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct dt{
    int d,x,y,i,j;
};
void solve(){
    set<dt>st;
    st.insert({1,2,3,4,5});
    st.insert({1,1,3,4,5});
    dt e= *st.begin();
    cout<<e.d;

    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}