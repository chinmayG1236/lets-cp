#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    int op=0;
    int n=s.size();
    if(s[0]=='o'){
        s= "i" + s;
        op=1;
    }
    
    if(n==1){
        cout<<"1\n"; return;
    }
    
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])op++;
    }
    if((op+n)%2 != 0)op++;
    cout<<op<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}