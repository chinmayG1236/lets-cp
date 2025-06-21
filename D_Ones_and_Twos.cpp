#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,q;cin>>n>>q;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    set<int>st;
    for(int i=1;i<=n;i++)if(a[i]==1)st.insert(i);

    while(q--){
        int op; cin>>op;
        int s,i,v;
        if(op==1){
            cin>>s;
            int sz=st.size();
            int t= sz+2*(n-sz);int f=n+1,l=0;
            if(!st.empty())f=*st.begin();if(!st.empty())l=*st.rbegin();
            int val=max(t-(f-1)*2,t-(n-l)*2);
            if(s>t){
                cout<<"NO\n";
            }
            else if(s<=val){
                cout<<"YES\n";
            }
            else{
                if(t%2==s%2){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
        else{
            cin>>i>>v;
            if(v==2){
                if(st.find(i)!=st.end())st.erase(i);
            }
            else{
                st.insert(i);
            }
        }

    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}