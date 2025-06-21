#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<char,int>mp;
    char ch;
    int mf=0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(mp[s[i]]>mf){
            ch=s[i];
            mf=mp[s[i]];
        }
    }
    int lf=INT_MAX;
    for(auto it : mp){
        lf=min(lf,it.second);
    }
    for(int i=0;i<n;i++){
        if(mp[s[i]]==lf && s[i]!=ch){
            s[i]=ch;
            cout<<s<<"\n";return;
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