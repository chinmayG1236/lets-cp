#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    bool c=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            cout<<"1\n";return;
        }
    }
    cout<<(int)s.size()<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}