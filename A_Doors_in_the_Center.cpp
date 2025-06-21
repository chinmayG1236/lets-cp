#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s; 
    for(int i=0;i<(n-1)/2;i++)s.push_back('-');
    s.push_back('=');
    if(n%2==0)s.push_back('=');
    for(int i=0;i<(n-1)/2;i++)s.push_back('-');
    cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}