#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    string s; cin>>s;
    int n=s.size();
    int ind=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ind=i;break;
        }
    }
    if(ind==-1){
        cout<<"1 1 1 "<<n<<"\n";return;
    }
    int sz=n-ind;
    queue<int>q;
    for(int i=0;i<ind;i++)q.push(i);
    for(int i=0;i<sz;i++){
        queue<int>f,u;
        int os=q.size();
        while(!q.empty()){
            int j=q.front(); q.pop();
            if(s[ind+i]!=s[j+i])f.push(j);
            else u.push(j);
        }
        if(u.size()==os){
            while(!u.empty()){
                int val=u.front(); u.pop(); q.push(val);
            }
        }
        else{
            while(!f.empty()){
                int val=f.front(); f.pop(); q.push(val);
            }
        }
    }
    int j=q.front();
    cout<<"1 "<<n<<" "<<j+1<<" "<<j+1+sz-1<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}