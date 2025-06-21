#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    int p=(*mp.begin()).first - 1; int mans=0;
    vector<int>v;v.push_back(0);
    for(auto it : mp){
        if(it.first==(p+1)){
            v.push_back(it.second);
            int sz=v.size();
            v[sz-1]+=v[sz-2];
            p++; continue;
        }
        
        int sz=v.size();
        for(int i=1;i<sz;i++){
            if(i+k-1>=sz)break;
            mans=max(mans,v[i+k-1]-v[i-1]);
        }
        if(k>=v.size()-1)mans=max(mans,v[sz-1]);
        v={0};v.push_back(it.second);
        p=it.first;
    }
    
    int sz=v.size();
    for(int i=1;i<sz;i++){
        if(i+k-1>=sz)break;
        mans=max(mans,v[i+k-1]-v[i-1]);
    }
    if(k>=v.size()-1)mans=max(mans,v[sz-1]);
    cout<<mans<<"\n";
    
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}