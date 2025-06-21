#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    multiset<int>st;
    for(int i=1;i<=n;i++){
        if(a[i]==0)continue;
        st.insert(i-(a[i]-1));
    }
    for(int i=1;i<=n;i++){
        if(st.empty()){
            cout<<"0 ";continue;
        }
        int x=*st.begin();
        if(x<=i){
            cout<<"1 ";
        }
        else cout<<"0 ";
        if(a[i]!=0)st.erase(st.find(i-(a[i]-1)));
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}