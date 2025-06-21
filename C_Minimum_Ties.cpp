#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    for(int j=2;j<=n/2 +1;j++){
        v[1][j]=1;
    }
    for(int j=n/2 +2;j<=n;j++){
        v[1][j]=-1;
    }
    if(n%2==0){
        v[1][n/2 +1]=0;
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j<=n;j++){
            v[i][j]=v[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<v[i][j]<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}