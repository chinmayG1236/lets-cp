#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<pair<int,pair<int,int>>>s1,s2;
    int lx = 7*sqrt(n+0.0);
    for(int i=1;i<=lx;i++){
        for(int j=1;j<=lx;j++){
            if(i%3==0 || j%3==0)continue;
            int d=i+j;
            if(i%3==2 && j%3==2)d+=2;
            s1.insert({d,{i,j}});
            if(i%3==1 && j%3==1)s2.insert({d,{i,j}});
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            pair<int,pair<int,int>> e= *s2.begin(); s2.erase(s2.begin());
            pair<int,int>pr= e.second;
            int x=pr.first,y=pr.second;
            s1.erase(e);
            cout<<x<<" "<<y<<"\n";
        }
        else{
            pair<int,pair<int,int>> e= *s1.begin(); s1.erase(s1.begin());
            pair<int,int>pr= e.second;
            int x=pr.first,y=pr.second;
            if(s2.find(e)!=s2.end())s2.erase(e);
            cout<<x<<" "<<y<<"\n";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}