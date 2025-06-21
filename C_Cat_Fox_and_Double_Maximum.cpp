#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>ans;
    int ct=0;
    vector<int>v(n+1);
    vector<pair<int,int>>mx,mn;
    for(int i=1;i<=n;i+=2)mx.push_back({a[i],i});
    for(int i=2;i<=n;i+=2)mn.push_back({a[i],i});
    sort(mx.begin(),mx.end());
    sort(mn.begin(),mn.end());
    for(int i=0;i<mx.size();i++){
        int ind=mx[i].second;
        v[ind]=n-i;
    }
    for(int i=mn.size()-1;i>=0;i--){
        int ind=mn[i].second;
        v[ind]=mn.size()-i;
    }
    ans=v;
    for(int i=2;i<=n-1;i++){
        if(a[i]+v[i]>a[i-1]+v[i-1] && a[i]+v[i]>a[i+1]+v[i+1])ct++;
    }
    mx.clear();mn.clear();
    for(int i=2;i<=n;i+=2)mx.push_back({a[i],i});
    for(int i=1;i<=n;i+=2)mn.push_back({a[i],i});
    sort(mx.begin(),mx.end());
    sort(mn.begin(),mn.end());
    for(int i=0;i<mx.size();i++){
        int ind=mx[i].second;
        v[ind]=n-i;
    }
    for(int i=mn.size()-1;i>=0;i--){
        int ind=mn[i].second;
        v[ind]=mn.size()-i;
    }
    int nct=0;
    for(int i=2;i<=n-1;i++){
        if(a[i]+v[i]>a[i-1]+v[i-1] && a[i]+v[i]>a[i+1]+v[i+1])nct++;
    }
    if(nct>ct)ans=v;
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}