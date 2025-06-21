#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int N,M;


void solve(){
    int n,m;cin>>n>>m; N=n; M=m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    if((n+m-1)%2 !=0){
        cout<<"NO\n";return;
    }
    vector<vector<int>>s(n,vector<int>(m,INT_MAX)),e(n,vector<int>(m,INT_MIN));
    s[n-1][m-1]=a[n-1][m-1];
    e[n-1][m-1]=a[n-1][m-1];
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(i==n-1 && j==m-1)continue;
            if(i+1<n){
                s[i][j]=min(s[i][j],s[i+1][j]+a[i][j]);
                e[i][j]=max(e[i][j],e[i+1][j]+a[i][j]);
            }
            if(j+1<m){
                s[i][j]=min(s[i][j],s[i][j+1]+a[i][j]);
                e[i][j]=max(e[i][j],e[i][j+1]+a[i][j]);
            }

        }
    }
    if(s[0][0]<=0 && e[0][0]>=0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}