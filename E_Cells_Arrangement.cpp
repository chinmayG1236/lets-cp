#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    cout<<"1 1\n";
    if(n>=2)cout<<"1 2\n";
    for(int i=3;i<=n;i++){
        
        cout<<i<<" "<<i<<"\n";
    }
    
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}