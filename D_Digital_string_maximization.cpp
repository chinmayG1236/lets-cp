#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s; cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(j<i-11)break;
            int n1=(s[j]-'0'),n2=(s[j+1]-'0');
            if(n2>n1+1){
                swap(s[j],s[j+1]);
                s[j]--;
            }
        }
    }
    cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}