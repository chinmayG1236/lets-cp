#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
map<ll,int>mp;
vector<ll>v={9,99,999,9999,99999,999999,9999999,99999999};
vector<pair<int,ll>>vec;
 
void solve(){
    ll n;cin>>n;
    
    for(auto &[ct,val]:vec){
        ll num=n+val;
        string s=to_string(num);
        for(int i=0;i<s.size();i++){
            if(s[i]=='7'){
                // ans=min(ans,ct);break;
                cout<<ct<<"\n";return;
            }
        }
    }
    cout<<"7"<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    mp[9]=1;mp[99]=1;mp[999]=1;mp[9999]=1;mp[99999]=1;mp[999999]=1;
    mp[9999999]=1;mp[99999999]=1;
    mp[999999999]=1;
    // mp[9999999999]=1;
    
    for(int k=0;k<5;k++){
        vector<pair<ll,int>>pos;
        for(auto &[val,ct]:mp){
            for(int i=0;i<8;i++){
                if(val+v[i]<9999999999)pos.push_back({val+v[i],ct+1});
            }
        }
        for(auto &[val,ct]:pos){
            if(mp.find(val)==mp.end()){
                mp[val]=ct;continue;
            }
            mp[val]=min(mp[val],ct);
        }
    }
    mp[0]=0;
 
    for(auto &[val,ct]:mp){
        if(val<=99999999*7)vec.push_back({ct,val});
    }
    sort(vec.begin(),vec.end());
 
    cout<<"size of vec is"<<vec.size()<<"\n";
    int t;cin>>t;
    while(t--)solve();
}
