#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    map<int,int>d,g;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            d[a[i][j]]++;
            if(j<m-1){
                if(a[i][j]==a[i][j+1])g[a[i][j]]++;
            }
            if(i<n-1){
                if(a[i][j]==a[i+1][j])g[a[i][j]]++;
            }
        }
    }
    if((int)g.size() == 0){
        cout<< (int)d.size() - 1 <<"\n"; return;
    }
    int x=g.size(),y=d.size();
    cout<< 2*(x-1) + (y-x) <<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}