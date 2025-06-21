#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    vector<int>a(6);
    cin>>a[1]>>a[2]>>a[4]>>a[5];
    int mf=0;
    for(int i=-200;i<=200;i++){
        a[3]=i;
        int x=0;
        for(int j=1;j<=3;j++){
            if(a[j]+a[j+1]==a[j+2])x++;
        }
        mf=max(mf,x);
    }
    cout<<mf<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}