#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    int n=s.size();
    int t=0;
    for(int i=0;i<n;i++)if(s[i]=='Q')t++;
    ll ans=0;
    int ct=0;
    for(int i=0;i<n;i++){
        if(s[i]=='Q')ct++;
        if(s[i]=='A'){
            ans+= ct*(t-ct);
        }
    }
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}