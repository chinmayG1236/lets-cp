#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int q;cin>>q;
    stack<int>st; for(int i=0;i<100;i++)st.push(0);
    while(q--){
        int t; cin>>t;
        if(t==1){
            int x; cin>>x;
            st.push(x);
        }
        else{
            int e=st.top();
            st.pop();
            
            cout<<e<<"\n";
        }
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}