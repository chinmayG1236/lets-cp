#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[a[i]]=i;
    }
    int p=mp[n/2], q=mp[n+1- n/2];
    if(p>q && n%2==0){
        cout<<n/2<<"\n"; return;
    } int ans=0;
    if(n%2==1){
        p=mp[n/2 +1];
        q=mp[n/2 +1];
    }
    for(int i= (n%2==0)? n/2-1 : n/2;i>=1;i--){
        int j=n+1-i;
        if(mp[i]>p || mp[j]<q){
            // ans++; p=1; q=n;
            ans= i; break;
        }
        else{
            p=mp[i];q=mp[j];
        }
    }

    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}