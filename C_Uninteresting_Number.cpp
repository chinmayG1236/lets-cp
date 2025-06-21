#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s; cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(s[i]-'0');
    }
    int mod= sum%9;
    stack<int>st;
    vector<int>v(9,0); v[mod]=1;
    for(int i=0;i<n;i++){
        if(s[i]=='2'){
            for(int j=0;j<9;j++){
                if(v[j]==0)continue;
                // v[(j+2)%9]=1;
                st.push((j+2)%9);
            }
            while(!st.empty()){
                int x=st.top();st.pop();
                v[x]=1;
            }

        }
        if(s[i]=='3'){
            for(int j=0;j<9;j++){
                if(v[j]==0)continue;
                // v[(j+2)%9]=1;
                st.push((j+6)%9);
            }
            while(!st.empty()){
                int x=st.top();st.pop();
                v[x]=1;
            }

        }
    }
    if(v[0]==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}