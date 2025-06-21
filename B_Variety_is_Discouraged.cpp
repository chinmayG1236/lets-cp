#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v(n+1,0);
    for(int i=0;i<n;i++){
        v[a[i]]++;
    }
    bool c=1;
    int ct=0;
    int mct=0;
    pair<int,int>ans={-1,-1};
    // for(int i=0;i<n;i++){
    //     if(v[a[i]]>1){
    //         if
    //     }
    // }

    int i=0;
    while(i<n){
        for(int j=i;j<n;j++){
            if(v[a[j]]==1){
                ct++;
            }
            else{
                break;
            }
        }
        if(ct>mct){
            mct=ct;
            ans={i,i+ct-1};
            
        }
        i=(i+ct+1);
        ct=0;
    }
    if(ans.first==-1 && ans.second==-1){
        cout<<"0\n";return;
    }
    ans.first ++;
    ans.second ++;
    cout<<ans.first<<" "<<ans.second<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}