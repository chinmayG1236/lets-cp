#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,d;cin>>n>>d;
    vector<int>v(10,0);
    if(n==2){
        if(d==1){v[1]=1;}
        if(d==2){v[1]=1;}
        if(d==3){v[1]=1;v[3]=1;}
        if(d==4){v[1]=1;}
        if(d==5){v[1]=1;v[5]=1;}
        if(d==6){v[1]=1;v[3]=1;}
        if(d==7){v[1]=1;v[7]=1;}
        if(d==8){v[1]=1;}
        if(d==9){v[1]=1;v[3]=1;v[9]=1;}
        for(int i=1;i<=9;i+=2){
            if(v[i]==1)cout<<i<<" ";
        }
        cout<<"\n";
        return;

    }
    
    if(n>=6){
        v[1]=1; v[3]=1; if(d==5)v[5]=1; v[7]=1; v[9]=1;
    }
    if(n>=3)v[7]=1;
    v[1]=1; v[d]=1;
    int x= 3*d;
    if(x%3==0)v[3]=1;
    if(x%5==0)v[5]=1;
    if(x%9==0)v[9]=1;
    if(x%7==0)v[7]=1;
    for(int i=1;i<=9;i+=2){
        if(v[i]==1)cout<<i<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}