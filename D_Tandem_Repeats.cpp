#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s; cin>>s;
    int n=s.size();
    for(int k=n/2;k>=1;k--){
        int ct=0;
        for(int i=0;i<=n-k-1;i++){
            if((s[i]=='?' || s[i+k]=='?') || (s[i]==s[i+k])){
                ct++;
                if(ct==k){
                    cout<<2*k<<"\n";return;
                }
            }
            else ct=0;
        }
    }
    cout<<"0\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}