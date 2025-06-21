#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>b(n-2);
    for(int i=0;i<n-2;i++)cin>>b[i];
    for(int i=0;i<=n-5;i++){
        if(b[i]==1 && b[i+1]==0 && b[i+2]==1){
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