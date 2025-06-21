#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    string s; cin>>s;
    char mc='a';
    char st,e;
    for(int i=0;i<n;i++){
        if(s[i]<=mc)continue;
        int d=(s[i]-mc);
        if(k>=d){
            k-=d;
            mc=s[i];
        }
        else{
            e=s[i];
            st=(s[i]-k);
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]<=mc)s[i]='a';
        else if(s[i]<=e && s[i]>=st){
            s[i]=st;
        }
    }
    cout<<s<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}