#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    int ct=1;
    for(int i=k-1;i<n;i+=k){
        a[i]=ct;
        ct++;
    }
    for(int i=0;i<n;i++){
        if((i+1)%k == 0)continue;
        a[i]=ct; ct++;
    }
    for(auto it : a)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}