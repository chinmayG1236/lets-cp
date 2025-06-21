#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct tup{
    ll x,y,val;
};
void solve(){
    ll n,m,k;cin>>n>>m>>k;
    vector<vector<ll>>a(n,vector<ll>(m));
    // for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    vector<string>g(n);
    for(int i=0;i<n;i++)cin>>g[i];
    vector<vector<bool>>vis(n,vector<bool>(m,0));
    ll val=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(g[i][j]=='0')val++;
            else val--;
        }
    }
    queue<tup>q;
    q.push({0,0,val});
    // cout<<val<<" ";
    vector<ll>v;
    while(!q.empty()){
        tup t=q.front(); q.pop();
        ll i=t.x,j=t.y,d=t.val;
        if(vis[i][j])continue;
        v.push_back((d));
        vis[i][j]=1;
        if(i<n-k){
            ll tmp=d;
            for(int ind=j;ind<j+k;ind++){
                if(g[i+k][ind]=='1')tmp++;
                else tmp--;
                if(g[i][ind]=='1')tmp--;
                else tmp++;

            }
            tup nt={i+1,j,tmp}; 
            q.push((nt));
        }
        if(j<m-k){
            ll tmp=d;
            for(int ind=i;ind<i+k;ind++){
                if(g[ind][j+k]=='1')tmp++;
                else tmp--;
                if(g[ind][j]=='1')tmp--;
                else tmp++;

            }
            tup nt={i,j+1,tmp};
            q.push(nt);
        }
    }
    ll gcdd=LLONG_MAX;
    for(auto it:v){
        if(it!=0){
            gcdd=it;break;
        }
    }
    for(int i=1;i<v.size();i++)if(v[i]!=0)gcdd=gcd(gcdd,abs(v[i]));
    ll d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='1')d+=a[i][j];
            else d-=a[i][j];
        }
    }
    if(d==0){
        cout<<"YES\n";return;
    }
    if(d%gcdd==0 && gcdd!=LLONG_MAX){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}