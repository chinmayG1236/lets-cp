#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ind=-1;
    for(int i=0;i<n;i++){
        if(a[i]==1 || a[i]==-1)continue;
        ind=i;break;
    }
    set<int>st;
    int l=0,h=0,c=0,s=0,e=0;
    for(int i=0;i<ind;i++){
        if(a[i]==1)c++;
        else c--;
        e=max(c-l,e);
        s=min(c-h,s);
        l=min(l,c);
        h=max(c,h);
    }
    for(int i=s;i<=e;i++)st.insert(i);

    l=0;h=0;c=0;s=0;e=0;
    for(int i=ind+1;i<n;i++){
        if(a[i]==1)c++;
        else c--;
        e=max(c-l,e);
        s=min(c-h,s);
        l=min(l,c);
        h=max(c,h);
    }
    for(int i=s;i<=e;i++)st.insert(i);
    if(ind==-1){
        cout<<st.size()<<"\n";
        for(auto it:st)cout<<it<<" ";
        cout<<"\n"; return;
    }
    int m1=0,m2=0,mx1=0,mx2=0;
    c=0;
    for(int i=ind-1;i>=0;i--){
        if(a[i]==1)c++;
        else c--;
        m1=min(m1,c);
        mx1=max(mx1,c);
    }
    c=0;
    for(int i=ind+1;i<n;i++){
        if(a[i]==1)c++;
        else c--;
        m2=min(m2,c);
        mx2=max(mx2,c);
    }
    s= a[ind]+m1+m2;
    e= a[ind]+mx1+mx2;
    for(int i=s;i<=e;i++)st.insert(i);
    cout<<st.size()<<"\n";
    for(auto it:st)cout<<it<<" ";
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}