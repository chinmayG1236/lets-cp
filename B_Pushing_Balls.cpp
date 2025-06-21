#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<string>mat;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        mat.push_back(s);
    }
    vector<vector<bool>>mar(n,vector<bool>(m,0));
    for(int i=0;i<n;i++){
        if(mat[i][0]=='1'){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='1')mar[i][j]=1;
                else break;
            }
        }
    }
    for(int j=0;j<m;j++){
        if(mat[0][j]=='1'){
            for(int i=0;i<n;i++){
                if(mat[i][j]=='1')mar[i][j]=1;
                else break;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='1' && !mar[i][j]){
                cout<<"NO\n"; return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}