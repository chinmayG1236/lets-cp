#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int l,r; cin>>l>>r;
    if(r-l+1==3){
        cout<<l<<" "<<l+1<<" "<<l+2<<"\n";return;
    }
    int xorr=(l^r);
    int val;
    for(int i=0;i<=30;i++){
        if((xorr & (1<<i))>0)val=(1<<i);
    }
    int num=0;
    int tmp=val;
    val*=2;
    while(val<=r){
        if((val & r)>0){
            num=(num | val);
        }
        val*=2;
    }
    int x=(num | tmp),y=(num|(tmp-1)),z=(num|(tmp-2));
    if(z<l){
        z=(num|(tmp+1));
    }
    cout<<x<<" "<<y<<" "<<z<<"\n";
    // cout<<tmp<<"\n";
    
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}