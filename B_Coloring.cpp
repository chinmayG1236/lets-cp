#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(m);
    for(int i=0;i<m;i++)cin>>a[i];
    queue<pair<int,int>>q; multiset<pair<int,int>>st;
    for(int i=0;i<m;i++){
        st.insert({a[i],i});
    }
    int ct=0;
    while(!st.empty()){
        ct++;
        pair<int,int>pr=*st.rbegin();
        st.erase(st.find(pr));
        pr.first--;
        q.push(pr);
        
        while(q.size()>=k){
            pair<int,int>npr=q.front(); q.pop();
            if(npr.first>0)st.insert(npr);
        }
        
    }
    // cout<<ct<<" ";
    if(ct==n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}