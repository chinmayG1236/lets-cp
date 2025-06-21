#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m,k; cin>>n>>m>>k;
    vector<int>a(k);
    for(int i=0;i<k;i++)cin>>a[i];
    int r=k;
    set<int>st;
    for(int i=0;i<k;i++){
        if(a[i]<=r)st.insert(a[i]);
        if(st.size()>=(n*m -2)){
            cout<<"TIDAK\n"; return;
        }
        while(!st.empty() && (*st.rbegin())==r){
            st.erase(r); r--;
        }
    }
    cout<<"YA\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}