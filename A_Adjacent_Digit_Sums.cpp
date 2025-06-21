#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int x,y;cin>>x>>y;
    if(y>=x){
        if(y-x == 1){
            cout<<"YES\n";return;
        }
        else{
            cout<<"NO\n";return;
        }
    }
    int d=x-y;
    if(d%9==8){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}