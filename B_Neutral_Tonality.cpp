#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    vector<int>ans;
    int j=0;
    for(int i=0;i<n;i++){
        while(j<m && b[j]>=a[i]){
            ans.push_back(b[j]);
            j++;
        }
        ans.push_back(a[i]);
    }
    while(j<m){
        ans.push_back(b[j]);
        j++;
    }
    for(auto it:ans)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}