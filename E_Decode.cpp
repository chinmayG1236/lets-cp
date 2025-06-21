#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod= 1e9 +7;
void solve(){
    
    string s; cin>>s;
    int n=s.size();
    map<int,ll>ps; ps[0]++;
    int z=0,o=0; ll ans=0; 
    for(int i=0;i<n;i++){
        if(s[i]=='0')z++;
        else o++;
        int d=o-z;
        if(ps.find(d)!=ps.end())ans+=((ps[d])*(n-i));
        ps[d]+=(i+2);
        ans%=mod;
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}