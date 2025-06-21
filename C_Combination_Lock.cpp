#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)a[i]=i+1;
    vector<int>ans(n);
    int s=1;
    if(n%2==0){
        cout<<"-1\n";return;
    }
    for(int i=n-1;i>=0;i--){
        int num=i+1;
        int np= (i-s+n)%n;
        ans[np]=num;
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}