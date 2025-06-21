#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>op(n);op[0]=0;
    for(int i=1;i<n;i++){
        double x=(a[i-1]+0.0)/(a[i]+0.0);
        ll ct=0;
        if(x>1.0)while(x>1.0){
            ct++;
            x/=2;
        }
        else{
            while(x<=1.0){
                ct--;
                x*=2;
            }
            ct++;
        }
        op[i]=max(op[i-1]+ct,0ll);
    }
    ll sum=0;for(auto it:op)sum+=it;
    cout<<sum<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}