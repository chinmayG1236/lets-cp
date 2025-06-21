#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    ll sum=0; for(auto it:a)sum+=it;
    if(sum%n !=0){
        cout<<"NO\n";return;
    }
    int x=sum/n;
    vector<ll>ad,su;
    for(int k=0;k<n;k++){
        int d=x-a[k];
        int p=-1,q=-1;
        for(int i=0;i<31;i++){
            for(int j=0;j<31;j++){
                ll td= ((1<<i)-(1<<j));
                if(td==d){
                    p=i;q=j;
                }
            }
        }
        if(p==-1){
            cout<<"NO\n";return;
        }
        ad.push_back(p);su.push_back(q);
    }
    sort(ad.begin(),ad.end());
    sort(su.begin(),su.end());
    if(ad==su){
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