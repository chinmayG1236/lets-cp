#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    string s,r; cin>>s>>r;
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')zero++;
        else one++;
    }
    for(int i=0;i<n-1;i++){
        if(one==0 || zero==0){
            cout<<"NO\n";return;
        }
        if(r[i]=='0')one--;
        else zero--;
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}