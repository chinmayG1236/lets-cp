#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    int n,m;cin>>n>>m;
    vector<int>v(n);
    bool isp=1;
    for(int c=1;c<=n;c++){
        vector<int>a(m);
        for(int i=0;i<m;i++)cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<m-1;i++){
            if(a[i+1]-a[i] != n){
                isp=0;
            }
            
        }
        v[a[0]]=c;
    }
    if(isp==0){
        cout<<"-1\n";return;
    }
    for(auto it:v)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}