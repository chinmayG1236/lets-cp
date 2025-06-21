#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[a[i]].push_back(i);
    }
    int val=(*mp.begin()).first,fac=1,l=(*mp.begin()).second[0],
    r=(*mp.begin()).second[0];
    for(auto &[num,v]:mp){
        int st=v[0],tf=1;
        for(int i=1;i<v.size();i++){
            tf-=(v[i]-v[i-1]-2);
            if(tf>fac){
                val=num;l=st,r=v[i];
                fac=tf;
            }
            if(tf<=0){
                st=v[i];
                tf=1;
            }
        }
    }
    cout<<val<<" "<<l+1<<" "<<r+1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}