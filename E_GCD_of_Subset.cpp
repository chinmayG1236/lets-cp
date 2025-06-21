#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>g(1e6+2,0);

    vector<vector<int>>f(1e6+2);
    for(int i=1;i<1e6+1;i++){
        for(int j=1;i*j<1e6+1;j++){
            f[i*j].push_back(i);
        }
    }
    for(int i=0;i<n;i++){
        sort(f[a[i]].begin(),f[a[i]].end());
        reverse(f[a[i]].begin(),f[a[i]].end());
        for(auto it:f[a[i]])g[it]++;
    }
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<f[a[i]].size();j++){
            int fac=f[a[i]][j];
            if(g[fac]>=k){
                ans[i]=fac;
                break;
            }
        }
    }
    for(auto it:ans)cout<<it<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}