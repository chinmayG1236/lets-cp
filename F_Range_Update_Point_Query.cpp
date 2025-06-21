#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int fn(int num){
    string s=to_string(num);
    int x=0;
    for(int i=0;i<s.size();i++){
        x+=(s[i]-'0');
    }
    return x;
}
void solve(){
    int n,q; cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int>st; vector<int>ans(n); ans=a;
    queue<int>Q;
    for(int i=0;i<n;i++){
        if(a[i]>=10)st.insert(i);
    }
    while(q--){
        int typ; cin>>typ;
        if(typ==1){
            int l,r; cin>>l>>r; l--;r--;
            auto it=st.lower_bound(l);
            while(true){
                if(*it>r)break;
                if(it==st.end())break;
                int na=fn(ans[*it]);
                ans[*it]=na;
                if(na<10)Q.push(*it);
                it++;
            }
            while(!Q.empty()){
                int x=Q.front(); Q.pop();
                st.erase(x);
            }
        }
        else{
            int x; cin>>x; x--;
            cout<<ans[x]<<"\n";
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--)solve();
}