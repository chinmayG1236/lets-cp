#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    map<int,int>mp1,mp2;
    for(int i=0;i<n;i++)mp1[a[i]]++;
    for(int i=0;i<n;i++)mp2[b[i]]++;
    int x=(int)mp1.size();
    int y=(int)mp2.size();
    if(x*y>=3){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}