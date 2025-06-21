#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    string t;cin>>t;
    vector<int>v(n),a;
    for(int i=0;i<n;i++)cin>>v[i];
    int st=-1,e=-1;
    for(int i=0;i<n;i++){
        if(t[i]=='B'){
            st=i;break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(t[i]=='B'){
            e=i;break;
        }
    }
    if(st==-1){
        cout<<"0\n"; return;
    }
    string s;
    for(int i=st;i<=e;i++)s.push_back(t[i]);
    for(int i=st;i<=e;i++)a.push_back(v[i]);
    n=s.size();
    v.clear();
    multiset<pair<int,int>>ms;
    vector<bool>vis(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            ms.insert({a[i],i});
        }
    }
    int op=0;
    while(!ms.empty()){
        pair<int,int>pr=*ms.rbegin();
        ms.erase(ms.find(pr));
        if(vis[pr.second])continue;
        if(op==k){
            ans=pr.first;break;
        }
        int ind=pr.second;
        for(int i=ind;i<n;i++){
            if(s[i]=='B'){
                vis[i]=1;
            }
            else break;
        }
        for(int i=ind;i>=0;i--){
            if(s[i]=='B')vis[i]=1;
            else break;
        }
        op++;
    }
    op=1;
    for(int i=0;i<n;i++)vis[i]=0;
    ms.clear();
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            ms.insert({a[i],i});
        }
    }
    while(!ms.empty()){
        pair<int,int>pr=*ms.rbegin();
        ms.erase(ms.find(pr));
        if(vis[pr.second])continue;
        if(op>=k){
            ans=min(ans,pr.first);break;
        }
        int ind=pr.second;
        for(int i=ind;i<n;i++){
            if(s[i]=='R'){
                vis[i]=1;
            }
            else break;
        }
        for(int i=ind;i>=0;i--){
            if(s[i]=='R')vis[i]=1;
            else break;
        }
        op++;
    }
    cout<<ans<<"\n";

    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}