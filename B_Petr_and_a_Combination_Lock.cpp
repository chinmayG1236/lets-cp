#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int l=1; for(int i=0;i<n-1;i++){l*=2;l++;}
    for(int i=0;i<=l;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if((i&(1<<j))>0)sum+=a[j];
            else sum-=a[j];
        }

        if(sum % 360 == 0){
            cout<<"YES\n";return;
        }
    }
    cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}