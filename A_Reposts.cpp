#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    map<string,int>mp;
    mp["polycarp"]=1;
    int ans=1;
    for(int i=0;i<n;i++){
        string s,t; cin>>s>>t>>t;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        transform(t.begin(), t.end(), t.begin(), ::tolower); 
        mp[s]=1+mp[t];
        ans=max(ans,mp[s]);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}