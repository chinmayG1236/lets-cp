#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ans=1;
    for(int k=2;k<=n;k++){
        vector<int>v;bool c=1;
        for(int i=0;i<n;i++){
            int ct= v.size()-(upper_bound(v.begin(),v.end(),i-k)-v.begin());
            bool z;
            if(s[i]=='0')z=1;else z=0;
            if(ct%2==1)z= !z;
            if(z)v.push_back(i);
            if(z && i>n-k){
                c=0;break;
            }

        }
        if(c==1)ans=k;
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}