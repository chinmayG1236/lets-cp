#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a;
    int tmp=n;
    while(tmp>=1){
        a.push_back(tmp);
        tmp/=2;
    }
    reverse(a.begin(),a.end());
    vector<int>prev(1,k);

    int val=1;
    for(int i=1;i<a.size();i++){
        vector<int>v;
        for(auto it:prev){
            if(it==k){
                v.push_back(k);
                v.push_back(k);
            }
            else{
                v.push_back(0);
                v.push_back(0);
            }
        }
        val*=2;
        if(val==a[i]){
            prev.resize(v.size());
            prev=v;
            continue;
        }
        val++;
        vector<int>vd(1,k);
        for(int i=1;i<v.size();i++){
            if((v[i]==0 && v[i-1]==0) || (v[i]==k && v[i-1]==k)){
                vd.push_back(0);
            }
            else vd.push_back(k);
        }
        vd.push_back(k);
        prev.resize(vd.size());
        prev=vd;

    }
    for(auto it:prev)cout<<it<<" ";
    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}