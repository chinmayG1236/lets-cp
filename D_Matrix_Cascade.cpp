#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<string>mat;mat.push_back(".");
    for(int i=0;i<n;i++){
        string s; cin>>s; s="."+s;
        mat.push_back(s);
    }
    map<int,int>ad,dif;
    int ans=0;
    vector<vector<bool>>op(n+2,vector<bool>(n+2,0));
    vector<vector<int>>nop(n+2,vector<int>(n+2,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int pop=nop[i-1][j];pop+=(ad[i+j]+dif[j-i]);
            if((mat[i][j]-'0')== pop%2){
                nop[i][j]=pop;continue;
            }
            ans++;
            nop[i][j]=pop+1;
            ad[i+j]++;dif[j-i]++;
        }
    }

    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}