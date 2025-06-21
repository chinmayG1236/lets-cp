#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    int s=1,e=n;
    while(true){
        int m=(s+e)/2;
        int i=m-1,j=m+1;
        int v0,v1,v2,v3,v4;
        if(i>=1 && i<=n){
            cout<<"? "<<i<<endl; 
            cin>>v1;
        }
        else v1=1e6;
        if(m>=1 && m<=n){
            cout<<"? "<<m<<endl; 
            cin>>v2;
        }
        else m=1e6;
        if(j>=1 && j<=n){
            cout<<"? "<<j<<endl; 
            cin>>v3;
        }
        else v1=1e6;
        if(v2<=v1 && v2<=v3){
            cout<<"! "<<m<<endl; return;
        }
        if(v1<v2 && v2<v3){
            e=m-1; continue;
        }
        if(v1>v2 && v2>v3){
            s=m+1; continue;
        }
        if(v2>v1 && v2>v3){
            int p=m-2,q=m+2;
            if(p==0 || q==n+1){
                cout<<"! "<<i<<endl;return;
            }
            if(q==n+1){
                cout<<"! "<<j<<endl;return;
            }
            cout<<"? "<<p<<endl;
            cin>>v0;
            cout<<"? "<<q<<endl;
            cin>>v4;
            if(v0<v1){
                e=p; continue;
            }
            if(v0>v1){
                cout<<"! "<<i<<endl;return;
            }
            if(v4<v3){
                s=q; continue;
            }
            if(v4>v1){
                cout<<"! "<<j<<endl;return;
            }


        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}