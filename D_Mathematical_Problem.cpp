#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<string> ans[100];
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<"1\n";return;
    }
    for(auto it:ans[n]){
        cout<<it<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ans[3]={"196","169","961"};
    string x="1",y="9",z="6";
    for(int i=5;i<=99;i=i+2){
        x=x+"0"; y=y+"0"; z=z+"0";
        for(auto it:ans[i-2]){
            ans[i].push_back(it+"00");
        }
        ans[i].push_back(x+z+"9");
        ans[i].push_back(y+z+"1");
    }

    int t;cin>>t;
    while(t--)solve();
}