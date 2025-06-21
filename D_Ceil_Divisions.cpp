#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    if(n<=32){
        cout<<n-3+5<<"\n";
        for(int i=3;i<n;i++){
            cout<<i<<" "<<n<<"\n";
        }
        for(int i=0;i<5;i++){
            cout<<n<<" "<<"2\n";
        }
        return;
    }
    cout<<n+5<<"\n";
    for(int i=3;i<n;i++){
        if(i==32)continue;
        cout<<i<<" "<<n<<"\n";
    }
    for(int i=0;i<4;i++){
        cout<<n<<" 32\n";
    }
    for(int i=0;i<5;i++){
        cout<<"32 2\n";
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}