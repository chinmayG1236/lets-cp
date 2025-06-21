#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,x;cin>>n>>x;
    vector<int>a(n,0);
    int orr=0;
    int ls=30;
    for(int i=0;i<31;i++){
        if( (x & (1<<i))==0){
            ls=i;
            break;
        }
    }
    int lm=(1<<ls); 
    for(int i=0;i<min(lm,n);i++){
        a[i]=i;
        orr=(orr|i);
    }

    if(lm>=n){
        if(orr != x){
            a[n-1]=x;
        }
    }
    else{
        for(int i=lm;i<n;i++)a[i]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}