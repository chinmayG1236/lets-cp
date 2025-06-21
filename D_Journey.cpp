#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    vector<int>v;
    vector<int>ans(n+1,1);
    // v.push_back(0);
    char req='R';
    for(int i=0;i<n;i++){
        if(s[i]==req){
            v.push_back(i);
            if(req=='R')req='L';
            else req='R';
        }
        else{
            for(auto it:v){
                if(s[it]=='R')ans[it]+=(i-it);
            }
            v.clear();
            req='R';
            if(s[i]=='R'){v.push_back(i);req='L';}
        }
    }
    for(auto it:v){
        if(s[it]=='R')ans[it]+=(n-it);
    }
    v.clear();


    req='L';
    for(int i=n;i>=0;i--){
        if(s[i-1]==req){
            v.push_back(i);
            if(req=='R')req='L';
            else req='R';
        }
        else{
            for(auto it:v){
                if(s[it-1]=='L')ans[it]+=(it-i);
            }
            v.clear();
            req='L';
            if(s[i]=='L'){v.push_back(i);req='R';}
        }
    }
    for(auto it:v){
        if(s[it-1]=='L')ans[it]+=(it);
    }
    v.clear();
    for(auto it:ans)cout<<it<<" ";
    cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}