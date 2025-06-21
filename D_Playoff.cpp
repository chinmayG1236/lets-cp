#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int o=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')o++;
    }

    int z=n-o;
    int st=pow(2,o);
    int e=pow(2,n)-pow(2,z)+1;
    for(int i=st;i<=e;i++){
        cout<<i<<" ";
    }

}
int main(){
    solve();
}