#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m;cin>>n>>m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=0;j<m;j++){
            // sum+= (a[i][j]*(n*m-j));
            sum+=a[i][j];
        }
        v.push_back({sum,i});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector<ll>fa;
    for(auto it : v){
        ll i=it.second;
        for(int j=0;j<m;j++){
            fa.push_back(a[i][j]);
        }
    }
    ll sum=0;
    for(int i=0;i<n*m;i++){
        sum+=(fa[i]*(n*m -i));
    }
    cout<<sum<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}