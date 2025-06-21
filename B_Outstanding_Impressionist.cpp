#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){cin>>a[i].first>>a[i].second;}
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        if(a[i].first==a[i].second){
            if(mp.find(a[i].first)==mp.end())v.push_back(a[i].first);
            mp[a[i].first]++;
        }
    }
    string s(n,'0');
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int x=a[i].first,y=a[i].second;
        if(x==y){
            if(mp[x]==1)s[i]='1';
        }
        else{
            if(mp.find(x)==mp.end() || mp.find(y)==mp.end()){
                s[i]='1'; continue;
            }
            int d= lower_bound(v.begin(),v.end(),x)-lower_bound(v.begin(),v.end(),y);
            if(d != (x-y))s[i]='1';
        }
    }
    cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}