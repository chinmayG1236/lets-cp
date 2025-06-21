#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    
    string s; cin>>s;
    s.pop_back();
    s.pop_back();
    s=s+"i";
    cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}