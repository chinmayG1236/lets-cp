#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k,p;cin>>n>>k>>p;
    k=abs(k);
    if(k>n*p){
        cout<<"-1\n";return;
    }
    int ans=k/p;
    if(k%p !=0)ans++;
    cout<<ans<<"\n";
    

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}