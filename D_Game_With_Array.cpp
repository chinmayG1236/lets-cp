#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,s;cin>>n>>s;
    if(n==1){
        if(s==1){
            cout<<"NO\n";return;
        }
        cout<<"YES\n"<<s<<"\n"<<s-1<<"\n"; return;
    }
    vector<int>a(n);
    for(int i=0;i<n-1;i++)a[i]=1;
    a[n-1]=s-(n-1);
    if(a[n-1]-1 > n-1){
        cout<<"YES\n";
        for(auto it : a){
            cout<<it<<" ";
        }
        cout<<"\n"<<a[n-1]-1<<"\n"; return;
    }
    cout<<"NO\n";

}
int main(){
    solve();
}