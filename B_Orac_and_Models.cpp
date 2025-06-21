#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>ans(n+1,1);
    int A=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=(int)sqrt(i+0.0);j++){
            if(i%j!=0)continue;
            if(a[j]<a[i])ans[i]=max(ans[i],1+ans[j]);
            if(a[i/j]<a[i])ans[i]=max(ans[i],1+ans[i/j]);
        }
        A=max(A,ans[i]);
    }
    
    
    cout<<A<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}