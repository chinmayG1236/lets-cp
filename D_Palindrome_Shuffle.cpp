#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    string s; cin>>s;
    int n=s.size();
    int st=-1,e=-1;
    for(int i=0;i<n/2; i++){
        int j=n-1-i;
        if(s[i]!=s[j]){
            st=i;e=j;break;
        }
    }
    if(st==-1){
        cout<<"0\n";return;
    }
    // cout<<"st "<<st<<" e "<<e<<" ";
    int ans=e-st; 
    multiset<char>e1,e2;
    int m=(st+e)/2;

    int ind;
    for(int i=m;i>=st;i--){
        if(s[i]!=s[m+(m-i)+1]){
            ind=i; break;
        }
    }
    // cout<<"ind "<<ind<<" ";
    for(int i=st;i<=e;i++){
        int j=e-(i-st);
        if(s[i]!=s[j]){
            if(e2.find(s[i])!=e2.end())e2.erase(e2.find(s[i]));
            else e1.insert(s[i]);
            if(e1.find(s[j])!=e1.end())e1.erase(e1.find(s[j]));
            else e2.insert(s[j]);
        }
        if(e1.empty() && e2.empty()){
            if(i==ind){
                ans=min(ans,i-st+1);
            }
            else{
                if(i>=m)ans=min(ans,i-st+1);
            }
        }
    }

    map<int,int>m1,m2;
    for(int i=st;i<=e;i++)m1[s[i]]++;
    for(int i=e;i>m;i--){
        m1[s[i]]--;m2[s[i]]++;
        if(m2[s[i]]>m1[s[i]])break;
        else ans=min(ans,i-st);
    }
    m1.clear();m2.clear();
    for(int i=st;i<=e;i++)m2[s[i]]++;

    for(int i=st;i<=m;i++){
        m1[s[i]]++;m2[s[i]]--;
        if(m2[s[i]]<m1[s[i]])break;
        else ans=min(ans,e-i);
    }


    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}