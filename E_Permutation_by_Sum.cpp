#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,l,r,s;cin>>n>>l>>r>>s;
    vector<int>a(n+1);
    int sum=0;
    int mv=0;
    for(int i=l;i<=r;i++){
        a[i]=i-l+1;
        sum+=i-l+1;
        mv+=(n-(i-l));
    }
    if(sum>s){
        cout<<"-1\n";return;
    }
    if(s>mv){
        cout<<"-1\n"; return;
    }
    int val=n;
    for(int i=r;i>=l;i--){
        if(sum==s)break;
        int d= val-a[i];
        if(d+sum<=s){
            sum+=d;
            a[i]=val;
            val--;
        }
        else{
            a[i]+=(s-sum);
            sum=s;
        }
    }
    set<int>st; for(int i=1;i<=n;i++)st.insert(i);
    for(int i=l;i<=r;i++)st.erase(a[i]);
    for(int i=1;i<l;i++){
        a[i]=*st.begin();
        st.erase(st.begin());
    }
    for(int i=r+1;i<=n;i++){
        a[i]=*st.begin();
        st.erase(st.begin());
    }
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    cout<<"\n";
}    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}