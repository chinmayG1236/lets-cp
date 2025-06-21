#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>primes;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp; int ans=0;
    for(int i=0;i<n;i++){
        int num=1,tmp=a[i];
        for(int j=0;j<primes.size();j++){
            int ct=0,x=primes[j];
            while(tmp%x ==0){
                ct++; tmp/=x;
            }
            if(ct%2==1)num*=x;
        }
        if(tmp>1)num*=tmp;
        if(mp.empty()){mp[num]++;continue;}
        if(mp.find(num)!=mp.end()){
            ans++;
            mp.clear();
            mp[num]++;
        }
        else mp[num]++;
    }
    cout<<ans+1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sz=4000;
    vector<bool>isp(sz,1);
    for(int i=2;i*i<sz;i++){
        if(!isp[i])continue;
        for(int j=i*i;j<sz;j+=i){
            isp[j]=0;
        }
    }
    for(int i=2;i<sz;i++){
        if(isp[i])primes.push_back(i);
    }
    int t;cin>>t;
    while(t--)solve();
}