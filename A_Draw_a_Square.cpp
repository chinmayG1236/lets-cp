#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int l,r,d,u; cin>>l>>r>>d>>u;
    if(l==r && d==u && l==d){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}