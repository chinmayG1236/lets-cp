#include<bits/stdc++.h>
using namespace std;
using ll=long long;

struct triple{
    int x,y,z;
};

void solve(){
    int n;cin>>n;
    int i=1,j=2,k=3;
    queue<triple>q;
    q.push({1,2,3});
    while(!q.empty()){
        triple t = q.front(); q.pop();
        i=t.x; j=t.y; k=t.z;
        cout<<"? "<<i<<" "<<j<<" "<<k<<endl;
        int p; cin>>p;
        if(p==0){
            cout<<"! "<<i<<" "<<j<<" "<<k<<endl;
            return;
        } 
        q.push({i,j,p});
        q.push({i,k,p});
        q.push({k,j,p});
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}