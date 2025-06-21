#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>s(m);
    for(int i=0;i<m;i++)cin>>s[i];
    vector<int>v(n+1,m-1);
    for(int i=1;i<=n;i++){
        for(int j=i+i;j<=n;j+=i){
            if(v[i]<=v[j])v[j]--;
        }
    }
    for(auto it:v){
        if(it<0){
            cout<<"-1\n";return;
        }
    }
    for(int i=1;i<=n;i++)cout<<s[v[i]]<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}