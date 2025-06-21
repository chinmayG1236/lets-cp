#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    if(a==1 && b==1){
        cout<<a+1<<" "<<b+1<<"\n"; return;
    }
    
    vector<ll>v;
    ll tmp=a*b,y;
    for(int i=2;i<=max(a,b);i++){
        while(tmp%i == 0){
            v.push_back(i); tmp/=i;
        }
        if(tmp==1)break;
    }
    ll m=v.size();
    for(ll x=c;x>a;x--){
        ll f=1,num=x;
        // for(int i=0;i<m;i++){
        //     if(num%v[i]==0){
        //         num/=v[i]; f*=v[i];
        //     }
        // }
        f=gcd(x,a*b);
        ll r=(a*b)/f;
        ll rem= r*(b/r + 1);
        if(rem<=d){
            cout<<x<<" "<<rem<<"\n"; return;
        }
    }
    cout<<"-1 -1\n";

}
int main(){
    int t;cin>>t;
    while(t--)solve();
}