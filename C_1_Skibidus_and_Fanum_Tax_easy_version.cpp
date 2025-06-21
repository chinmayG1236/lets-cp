#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b.begin(),b.end());
    if(-a[0]+b[0]<a[0])a[0]= (-a[0]+b[0]);
    for(int i=1;i<n;i++){
        int x=a[i-1];
        int val=x+a[i];
        int ind=lower_bound(b.begin(),b.end(),val)-b.begin();
        if(ind<m){
            if(a[i]<a[i-1])a[i]= (-a[i]+b[ind]);
            else if(-a[i]+b[ind]<a[i])a[i]= (-a[i]+b[ind]);
        }
        if(a[i]<a[i-1]){

            cout<<"NO\n";return;
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}