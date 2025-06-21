#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,a,b,c;cin>>n>>a>>b>>c;
    int dist= a+b+c;
    int days= (n/dist)*3;
    int d= (n/dist)*dist;
    if(d>=n){
        cout<<days<<"\n";return;
    }
    d+=a;
    if(d>=n){
        cout<<days+1<<"\n";return;
    }
    d+=b;
    if(d>=n){
        cout<<days+2<<"\n";return;
    }
    d+=c;
    if(d>=n){
        cout<<days+3<<"\n";return;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}