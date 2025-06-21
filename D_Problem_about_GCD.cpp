#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(ll f1,ll f2,ll G,ll l,ll r){
    if((f1*G >=l && f1*G <=r) && (f2*G >=l && f2*G <=r))return 1;
    return 0;
}
void solve(){
    ll l,r,G;cin>>l>>r>>G;
    ll f1=-1,f2=-1,f3=-1,f4=-1;
    f1= l/G; if(l%G!=0)f1++;
    f2=f1+1;
    f4= r/G;
    f3= f4-1;
    f1=max(0ll,f1);f2=max(0ll,f2);f3=max(0ll,f3);f4=max(0ll,f4);
    ll d=-1;
    ll s=LLONG_MAX, e=0;
    for(ll i=f1;i<=f1+5;i++){
        for(ll j=f4;j>=f4-5;j--){
            if(i<f1 || i>f4)continue;
            if(j<f1 || j>f4)continue;
            if(gcd(i,j)==1ll){
                if(abs(i-j)>d){
                    s=min(i,j);e=max(i,j);
                    d=abs(i-j);
                }
                else if(abs(i-j)==d){
                    if(min(i,j)<s){
                       s=min(i,j);e=max(i,j); 
                    }
                }
            }
        }
    }
    if(s==LLONG_MAX){
        cout<<"-1 -1\n";
    }
    else{
        cout<<G*s<<" "<<G*e<<"\n";
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}