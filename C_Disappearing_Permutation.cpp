#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n+1),d(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>d[i];
    vector<int>par(n+1,-1),op(n+1,-1),mar(n+1,-1);
    for(int i=1;i<=n;i++){
        if(par[i]!=-1)continue;
        
        int ni=a[i];
        par[i]=i;
        int ct=1;
        while(true){
            if(ni==i){op[i]=ct;break;}
            par[ni]=i;
            ni=a[ni];
            ct++;
        }
    }
    int tmp=0;
    for(int i=1;i<=n;i++){
        int ind=d[i];
        if(mar[par[ind]]==1){
            cout<<tmp<<" ";
        }
        else{
            tmp+=op[par[ind]];
            mar[par[ind]]=1;
            cout<<tmp<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}