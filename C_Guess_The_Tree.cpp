#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void fn(int i,int j,set<int>&st,set<pair<int,int>>&pr){
    
    if((st.find(i)==st.end() && st.find(j)==st.end())) return;
    if(j<i)swap(i,j);
    cout<<"? "<<i<<" "<<j<<endl;
    int m; cin>>m;
    if(i==m){
        pr.insert({i,j}); 
        if(st.find(i)!=st.end())st.erase(st.find(i));
        if(st.find(j)!=st.end())st.erase(st.find(j));
    }
    else{
        if(!(st.find(i)==st.end() && st.find(m)==st.end()))fn(i,m,st,pr);
        if(!(st.find(m)==st.end() && st.find(j)==st.end()))fn(m,j,st,pr);
    }
}
void solve(){
    int n;cin>>n;
    set<int>st;
    set<pair<int,int>>pr;
    for(int i=1;i<=n;i++)st.insert(i);
    fn(1,2,st,pr);
    while(!st.empty()){
        int x=*st.begin();
        fn(1,x,st,pr);
    }
    cout<<"! ";
    for(auto it:pr){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}