#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    multiset<int>st;
    for(int i=0;i<n;i++)st.insert(a[i]);
    int ct=0;
    for(int i=0;i<n;i++){
        if(st.empty())break;
        if(st.find(a[i])==st.end())continue;
        else st.erase(st.find(a[i]));
        if(st.empty())break;

        int r= k-a[i];
        if(st.find(r)!=st.end()){
            ct++;
            st.erase(st.find(r));
        }
    }
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}