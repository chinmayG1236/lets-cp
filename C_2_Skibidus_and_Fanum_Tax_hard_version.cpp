#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    vector<int>a={1,2,3,4,4,3,2,1};
    int sum=0;
    for(int i=0;i<8;i++)sum+=(a[i]*(12-i));
    cout<<sum<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}