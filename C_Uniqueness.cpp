#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>mp,ind;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]]==1)ind[a[i]]=i;
        else{
            if(ind.find(a[i])!=ind.end()){
                ind.erase(ind.find(a[i]));
            }
        }
    }
    if(ind.empty()){
        cout<<"-1\n"; return;
    }

    // for(auto &[val,i] : i)
    cout<<(*(ind.rbegin())).second + 1<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}