#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int v1=0,v2=0;
    for(int i=0;i<n;i++){
        v1=max(v1,a[i]+i);
    }
    for(int i=0;i<n;i++){
        v2=max(v2,a[n-1-i]+i);
    }
    int val=min(v1,v2);

    set<pair<int,int>>st;
    for(int i=0;i<n;i++)st.insert({a[i]+i,i});
    vector<int>ans(n,0);
    for(int i=0;i<n-1;i++){
        st.erase({a[i]+i,i});
        int ind=(*st.rbegin()).second;
        int r=ind+a[ind];
        r=max(r,a[i]);
        ans[i]=r;
    }
    
    reverse(a.begin(),a.end());
    st.clear();
    for(int i=0;i<n;i++)st.insert({a[i]+i,i});
    for(int i=0;i<n-1;i++){
        st.erase({a[i]+i,i});
        int ind=(*st.rbegin()).second;
        int r=ind+a[ind];
        r=max(r,a[i]);
        ans[n-1-i]=max(ans[n-1-i],r);
    }
    for(int i=1;i<n-1;i++)val=min(val,ans[i]);
    cout<<val<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}