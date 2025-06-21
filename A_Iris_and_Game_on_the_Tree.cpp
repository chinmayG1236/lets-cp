#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    vector<int>d(n+1,0);
    for(int i=0;i<n-1;i++){
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        d[x]++;d[y]++;
    }
    string s; cin>>s; s= "."+s;
    int o=0,z=0,q=0,root=0;
    if(s[1]=='?')root=-1;
    else if(s[1]=='1')root=1;
    int nlq=0;
    for(int i=2;i<=n;i++){
        if(d[i]>1 ){if(s[i]=='?')nlq++;continue;}
        if(s[i]=='0')z++;
        else if(s[i]=='1')o++;
        else q++;
        
    }
    int ct=q/2; if(q%2==1)ct++;
    if(root==-1){
        int ans=max(o,z)+q/2;
        if(o==z && nlq%2==1 && q%2==1)ans++;
        cout<<ans<<"\n";return;
    }
    (root==0)? cout<<o+ct<<"\n" : cout<<z+ct<<"\n";


    
    

    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}