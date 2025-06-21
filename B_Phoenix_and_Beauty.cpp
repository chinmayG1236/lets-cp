#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v,ans;map<int,int>mp;
    for(int i=0;i<n;i++){
        if(mp.find(a[i])==mp.end()){
            v.push_back(a[i]);
            mp[a[i]]++;
        }
    }
    if(v.size()>k){
        cout<<"-1\n";return;
    }
    while(v.size()<k)v.push_back(1);
    for(int j=0;j<n;j++){
        for(int i=0;i<v.size();i++)ans.push_back(v[i]);
    }
    cout<<k*n<<"\n";
    for(auto it:ans)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}