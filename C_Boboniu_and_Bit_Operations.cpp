#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
   
    for(int k=0;k<=1024;k++){
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                int val = (k|(a[i]&b[j]));
                if(val==k){
                    c=1;break;
                }
            }
            if(c==0)break;
            if(i==n-1){
                cout<<k<<"\n";return;
            }
        }
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}