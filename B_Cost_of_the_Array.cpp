#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ct=2,ind=1;
    multiset<int>st;
    for(int i=1;i<=n-k+1;i++){
        st.insert(a[i]);
    }
    // st.erase(st.find(a[0]));
    // st.insert(a[n-k+1]);
    int f=*st.begin(),l=*st.rbegin();
    if(f!=1 || l!=1){
        cout<<"1\n";return;
    }
    if(st.size()>1){
        cout<<"2\n";return;
    }
    int s=1,e=n-k+2;
    for(int i=2;i<n;i++){
        if(e>=n)break;
        st.insert(a[e]);e++;
        st.insert(a[e]);e++;
        // st.insert(a[i-2]);
        st.erase(st.find(a[s]));s++;
        st.erase(st.find(a[s]));s++;
        f=*st.begin();l=*st.rbegin();
        if(f!=i || l!=i){
            cout<<ct<<"\n";return;
        }
        if(st.size()>1){
            cout<<i+1<<"\n";return;
        }
        
    }
    cout<<k/2 + 1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}