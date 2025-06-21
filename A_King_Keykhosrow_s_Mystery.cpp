#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int a,b;cin>>a>>b;
    for(int m=min(a,b);m<=a*b;m++){
        if(m%a == m%b){
            cout<<m<<"\n";return;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}