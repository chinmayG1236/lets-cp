#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m,k;cin>>n>>m>>k;
    if(abs(n - m)>k){
        cout<<"-1\n";return;
    }
    if(n/k < 1 && m/k <1){
        cout<<"-1\n";return;
    }
    string ans;
    string s1(k,'0'),s2(k,'1'),s3(n%k,'0'),s4(m%k,'1');
    
    if(n/k > m/k){
        for(int i=0;i<m/k;i++){
            ans = ans+s1+s2;
        }
        ans= ans+s1+s4+s3;
    }
    if(m/k > n/k){
        for(int i=0;i<n/k;i++){
            ans = ans+s2+s1;
        }
        ans= ans+s2+s3+s4;
    }
    if(n/k == m/k){
        if(m%k >= n%k){
            for(int i=0;i< n/k;i++){
                ans = (ans+s2+s1);
            }
            ans= ans+s4+s3;
        }
        else{
            for(int i=0;i< n/k;i++){
                ans = (ans+s1+s2);
            }
            ans= ans+s3+s4;
        }
        
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}