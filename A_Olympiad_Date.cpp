#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int o=0,z=0,tw=0,th=0,f=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)z++;
        if(a[i]==1)o++;
        if(a[i]==2)tw++;
        if(a[i]==3)th++;
        if(a[i]==5)f++;
        if(z>=3 && o>=1 && tw>=2 && th>=1 && f>=1){
            cout<<i+1<<"\n"; return;
        }
    }
    cout<<"0\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}