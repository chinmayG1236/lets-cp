#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    vector<vector<int>>adj(27);
    set<int>st;
    vector<int>ind(27,0);

    for(int i=0;i<n-1;i++){
        bool c=1;
        for(int j=0;j<min(v[i].size(),v[i+1].size());j++){
            if(v[i][j]!=v[i+1][j]){
                adj[(v[i][j]-'a')].push_back((v[i+1][j]-'a'));
                ind[(v[i+1][j]-'a')]++;
                st.insert((v[i][j]-'a'));
                st.insert((v[i+1][j]-'a'));
                c=0;break;
            }
            
        }
        if(c){
            if(v[i].size()>v[i+1].size()){
                cout<<"Impossible\n";return;
            }
        }
    }
    queue<int>q;
    for(int i=0;i<26;i++){
        if(ind[i]==0)q.push(i);
    }
    string ans;
    while(!q.empty()){
        int i=q.front(); q.pop();
        ans.push_back(('a'+i));
        if(st.find(i)!=st.end())st.erase(i);
        for(auto it:adj[i]){
            ind[it]--;
            if(ind[it]==0)q.push(it);
        }
    }
    if(!st.empty()){
        cout<<"Impossible\n"; return;
    }
    st.clear();for(int i=0;i<26;i++)st.insert(i);
    for(auto it:ans)st.erase(it-'a');
    for(auto it:st)ans.push_back('a'+it);
    cout<<ans<<"\n";


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}