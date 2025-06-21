#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>ans((int)n+1);
    ll i=1,j=n;
    ll ct=0;
    for(ll d=1;d<=n;d++){
        if(n-i>50){
            ans[i]=d;
            i++;
            continue;
        }
        ll nct= ct+ (ll)pow(2,max(j-i-1,0ll));
        if(nct<k){
            ans[j]=d;
            j--;
            ct=nct;
        }
        else{
            ans[i]=d;
            i++;
        }
    }
    // if(ct<k){
    //     cout<<"-1\n";return;
    // }
    if(n<=50 && k+0ll>pow(2,n-1)){
        cout<<"-1\n";return;
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}