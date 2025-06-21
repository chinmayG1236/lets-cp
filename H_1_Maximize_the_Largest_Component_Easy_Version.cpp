#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool oob(int i,int j,int n,int m){
    if(i<0 || j<0 || i>=n || j>=m)return 1;
    return 0;
}
void dfs(int ct,int i,int j,vector<string>&a,vector<vector<int>>&v,int &n,int &m){
    if(oob(i,j,n,m))return;
    if(a[i][j]=='.')return;
    if(v[i][j]!=0)return;
    v[i][j]=ct;
    dfs(ct,i+1,j,a,v,n,m);
    dfs(ct,i,j+1,a,v,n,m);
    dfs(ct,i,j-1,a,v,n,m);
    dfs(ct,i-1,j,a,v,n,m);
}
void solve(){
    int n,m;cin>>n>>m;
    vector<string>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<int>>v(n,vector<int>(m,0));
    int ct=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#' && v[i][j]==0){dfs(ct,i,j,a,v,n,m);ct++;}
        }
    }
    int ans=0;
    vector<int>s(ct+1,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            s[v[i][j]]++;
        }
    }
    for(int i=0;i<n;i++){
        int c=0,tmp=0; set<int>st;
        for(int j=0;j<m;j++){
            if(a[i][j]=='.')c++;
            else st.insert(v[i][j]);
            if(!oob(i-1,j,n,m)&&a[i-1][j]=='#')st.insert(v[i-1][j]);
            if(!oob(i+1,j,n,m)&&a[i+1][j]=='#')st.insert(v[i+1][j]);
        }
        tmp=c;for(auto it:st)tmp+=s[it];
        ans=max(ans,tmp);
    }

    for(int j=0;j<m;j++){
        int c=0,tmp=0; map<int,int>mp;
        for(int i=0;i<n;i++){
            if(a[i][j]=='.')c++;
            else mp[v[i][j]]++;
            if(!oob(i,j-1,n,m)&&a[i][j-1]=='#')mp[v[i][j-1]]++;
            if(!oob(i,j+1,n,m)&&a[i][j+1]=='#')mp[v[i][j+1]]++;;
        }
        tmp=c;for(auto it:mp)tmp+=s[it.first];
        ans=max(ans,tmp);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}