#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(string x){
    for(int i=0;i<x.size();i++){
        if(x[i]!='a')return 1;
    }
    return 0;
}
void solve(){
    int q; cin>>q;
    ll sos=1,sot=1;
    bool f1=0,f2=0;
    while(q--){
        int d,k; cin>>d>>k; string x; cin>>x;
        if(check(x)){
            if(d==1)f1=1;
            else f2=1;
        }
        if(f2){
            cout<<"YES\n";continue;
        }
        if(f1){
            cout<<"NO\n";continue;
        }
        if(d==1)sos+= 1ll*k*(x.size());
        else sot+= 1ll*k*(x.size());
        if(sos<sot){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}