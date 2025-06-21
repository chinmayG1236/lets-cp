#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>ans(n+1,0);
    for(int i=1;i<=n-2;i++){
        ans[i]=i;
    }
    int e=0,o=0;
    for(int i=1;i<=n-2;i=i+2){
        o=(o^i);
    }
    for(int i=2;i<=n-2;i=i+2){
        e=(e^i);
    }
    if(e==o){
        ans[1]=0; o=(o^1);
    }
    if(n%2==0){
        ans[n-1]=(1<<30);
        ans[n]=((e^o)^ans[n-1]);
    }
    else{
        ans[n]=(1<<30);
        ans[n-1]=((e^o)^ans[n]);
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}