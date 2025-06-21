#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ct=0;int x=0;if(s[n-1]=='1')x=1;
    for(int i=n-1;i>=1;i--){
        if(s[i]=='0' && s[i-1]=='1')ct++;
    }
    cout<< 2*ct + x<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}