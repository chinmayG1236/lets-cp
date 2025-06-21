#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m;cin>>n>>m;
    string s; cin>>s; s="."+s;
    int ct=0;
    vector<int>c(n+2,0),high(n+2,0),low(n+2,0),gain(n+2,0),loss(n+2,0);
    for(int i=1;i<=n;i++){
        if(s[i]=='+')ct++;
        else ct--;
        c[i]=ct;
        high[i]=max(high[i-1],ct);
        low[i]=min(low[i-1],ct);
    }
    for(int i=n;i>=1;i--){
        gain[i]=gain[i+1];
        loss[i]=loss[i+1];
        if(s[i]=='-'){
            loss[i]--;
            gain[i]--;
        }
        else{
            loss[i]++;
            gain[i]++;
        }
        gain[i]=max(0,gain[i]);
        loss[i]=min(loss[i],0);
    }
    while(m--){
        int l,r; cin>>l>>r;
        int h=max(high[l-1],c[l-1]+gain[r+1]);
        int lo=min(low[l-1],c[l-1]+loss[r+1]);
        int ans= h-lo+1;
        cout<<ans<<"\n";
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}