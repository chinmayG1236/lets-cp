#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int mod=998244353;
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll c1=0,c2=0,n1=1,n2=1;
    bool c=0;
    for(int i=0;i<n;i++){
        // if(a[i]>=0){
        //     c1+=a[i]; n1*=2;
        //     c2+=a[i]; if(c2>=0)n2*=2;
        //     n1%=mod;n2%=mod;
        // }
        // else{
        //     c1+=a[i]; if(c1>=0)n1*=2;
        //     c2+=a[i]; if(c2>=0)n2*=2;
        //     n1%=mod;n2%=mod;
        // }

        c1+=a[i]; c2+=a[i]; if(c1>=0)n1*=2; if(c2>=0)n2*=2;
        if(c1<0)c1=abs(c1);
        if(c2<0 && abs(c2)>c1){
            c1=abs(c2); n1=n2;
        }
        else if(abs(c2)==c1 && c){
            n1+=n2;
        }
        if(c2<0)c=1;
        n1%=mod;n2%=mod;
    }
    cout<<n1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}
