#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int>a(x);
    for(int i=0;i<x;i++)cin>>a[i];
    sort(a.begin(),a.end());
    vector<int>e,o;
    for(int i=1;i<x;i++){
        int d=a[i]-a[i-1];
        if(d%2==0)e.push_back(d);
        else o.push_back(d);
    }
    int d=n-a[x-1]+a[0];
    if(d%2==0)e.push_back(d);
    else o.push_back(d);
    int ex=0;
    sort(e.begin(),e.end());
    
    for(auto it:e){
        if(it==2){ex++;continue;}
        if(y<=0)continue;
        
        int tex=it/2;
        int op=tex-1;
        int aop=min(y,op);
        if(op==aop)ex+=(op+1);else ex+=aop; 
        y-=(aop);
        x+=(aop);
    }
    for(auto it:o){
        if(y<=0)break;
        int tex=it/2;
        int aop=min(tex,y);
        ex+=aop; 
        y-=aop;
        x+=aop;
    }
    cout<<x-2+ex<<"\n";


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}