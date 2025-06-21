#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<int>v(1e6,INT_MAX);
    set<pair<int,int>>st;
    // v[n]=0;
    st.insert({0,n});
    while(!st.empty()){
        pair<int,int>pr=*st.begin(); st.erase(st.begin());
        int num=pr.second,op=pr.first;
        if(v[num]<=op)continue;
        v[num]=op;
        if(num<m){
            st.insert({op+1,2*num});
        }
        if(num-1>0)st.insert({op+1,num-1});
    }
    cout<<v[m]<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}