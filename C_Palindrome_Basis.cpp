#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int N=4 * 1e4;
vector<ll>ans(N+1,0);
vector<int>v;
void fn(int i,ll &sum){
    if(i>=v.size())return;
    if(sum>N)return;
    
    sum+=v[i];
    ans[sum]++;
    fn(i,sum);
    sum-=v[i];
    fn(i+1,sum);
}
bool isp(int i){
    string s=to_string(i);
    for(int j=0;j<s.size();j++){
        if(s[j]!=s[s.size()-1-j])return 0;
    }
    return 1;
}
void solve(){
    int n;cin>>n;
    cout<<ans[n]<<"\n";
}
int main(){
    for(int i=1;i<=N;i++){
        if(isp(i))v.push_back(i);
    }
    ll sum=0;
    fn(0,sum);
    

    int t;cin>>t;
    while(t--)solve();
}