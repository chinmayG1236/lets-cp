#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-2;i++){
        if(a[i]==a[i+1] && a[i+1]==a[i+2]){
            cout<<"Yes\n";return;
        }
    }
    cout<<"No\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}