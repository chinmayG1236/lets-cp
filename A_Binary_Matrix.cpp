#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    vector<string>v;
    int x=0;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        v.push_back(s);
        int ct=0;
        for(int j=0;j<m;j++){
            if(s[j]=='1')ct++;
        }
        if(ct%2==1)x++;
    }
    int y=0;
    for(int j=0;j<m;j++){
        int ct=0;
        for(int i=0;i<n;i++){
            if(v[i][j]=='1')ct++;
        }
        if(ct%2==1)y++;
    }
    cout<< max(x,y) <<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}