#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n+2);
    for(int i=1;i<=n;i++)cin>>a[i];
    a[0]=0;
    a[n+1]=0;
    int ct=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0 && a[i-1]==0 && a[i+1]==0)ct++;
        if(a[i]!=0 && a[i-1]==0)ct++;
    }
    vector<bool>col(n+2,0);
    col[0]=1;
    for(int i=1;i<=n;i++){
        if(a[i]!=0 && a[i-1]==0){
            if(i==n){col[i-1]=1;continue;}
            bool c=0;
            for(int j=i;j<=n+1;j++){
                if(j==n+1){col[i-1]=1;break;}
                if(a[j]==2)c=1;
                if(a[j]==0){
                    if(col[i-1]){
                        col[j]=1;
                    }
                    else{
                        col[i-1]=1;
                        if(c)col[j]=1;
                    }
                    break;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]!=0)continue;
        if(a[i]==0 && !(a[i-1]==0 && a[i+1]==0))if(!col[i]){ct++;}
    }
    // for(auto it:col)cout<<it<<" ";cout<<"\n";
    cout<<ct<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}