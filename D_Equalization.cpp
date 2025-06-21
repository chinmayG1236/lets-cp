#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n,m;cin>>n>>m;
    if(m>n)swap(n,m);
    int f1,f2;
    for(int i=62;i>=0;i--){
        if((n&(1ll<<i))!=0){
            f1=i;
            break;
        }
    }
    for(int i=62;i>=0;i--){
        if((m&(1ll<<i))!=0){
            f2=i;
            break;
        }
    }
    int x=-1,y=-1;
    for(int i=f2;i>=0;i--){
        if((n&(1ll<<(i+f1-f2)))!=(m&(1ll<<(i)))){
            y=i+1;
            x=y+f1-f2;
            break;
        }
    }
    ll ans=0;
    set<int>st;
    if(x==-1){
        if(f1==f2){
            cout<<"0\n"; return;
        }
        y=0;
        x=f1-f2;
    }
    for(int i=1;i<62;i++){
        
        if(y>x)swap(x,y);
        if(x<=0)break;
        int r= x-i;
        if(st.find(r)!=st.end()){
            break;
        }
        ans+=(1ll<<i);
        st.insert(i);
        x=r;
    }
    ans+=(1ll<<x);
    ans+=(1ll<<y);
    cout<<ans<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}