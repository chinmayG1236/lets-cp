#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    string s; cin>>s;
    bool c=1;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            c=0; break;
        }
    }
    if(c){
        cout<<"NO\n"; return;
    }
    string t=s;
    reverse(t.begin(),t.end());
    if(k==0 && t==s){
        cout<<"NO\n"; return;
    }
    if(k==0){
        for(int i=0;i<n;i++){
            if(s[i]==t[i])continue;
            if(t[i]<s[i]){
                cout<<"NO\n";return;
            }
            else{
                break;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}