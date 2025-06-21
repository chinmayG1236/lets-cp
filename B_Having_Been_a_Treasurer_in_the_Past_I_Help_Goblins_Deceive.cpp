#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-')a++;
        else b++;
    }
    if(a<=1 || b<=0){
        cout<<"0\n";return;
    }
    if(a%2==0){
        c=a/2;
        a/=2;
    }
    else{
        c=a/2;
        a/=2;
        a++;
    }
    ll ans= 1ll*a*b*c;
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}