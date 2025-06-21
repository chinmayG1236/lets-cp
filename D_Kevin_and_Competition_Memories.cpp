#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    ll r=a[0];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int k=1;k<=m;k++){
        ll s=0;
        ll si=(upper_bound(b.begin(),b.end(),r)-b.begin())+m%k;
        ll ct=0;
        for(int i=si;i<m;i+=k){
            ct++;
            // ll ind=upper_bound(b.begin()+i,b.begin()+i+k,r)-b.begin();
            // if(ind>=i+k){
            //     s+=1; continue;
            // }
            ll d=b[i];
            ll j=lower_bound(a.begin(),a.end(),d)-a.begin();
            if(j>=n)s+=1;
            else s+=(n-j+1);
        }
        s+= (m/k -ct);
        cout<<s<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}