#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v(n+2,0);
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(v[i]==1){
            cout<<"NO\n";return;
        }
        if(v[i]==2 || v[i]==0)continue;
        v[i+1]+=(v[i]-2);
        v[i]=2;
    }
    for(int i=1;i<= n+1 ;i++){
        if(v[i]%2==1){
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