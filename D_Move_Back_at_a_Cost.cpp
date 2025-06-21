#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v,p;
    multiset<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int minv=INT_MAX;
    for(int i=0;i<n;i++){
        int val=*st.begin();
        if(a[i]==val && a[i]<=minv)v.push_back(a[i]);
        else {p.push_back(a[i]); minv=min(minv,a[i]+1);}
        st.erase(st.find(a[i]));
    }
    sort(p.begin(),p.end());
    for(auto it : p){
        v.push_back(it+1);
    }
    // sort(v.begin(),v.end());
    for(auto it : v)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}