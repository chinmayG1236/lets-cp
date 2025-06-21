#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int>a(n,0),b(n,0),s(n,0);
    b[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i]<b[i-1])b[i]=b[i-1]-1;
        else if(arr[i]==b[i-1])b[i]=b[i-1];
        else b[i]=b[i-1]+1;

        s[i]=max(s[i-1],b[i-1]);

        int v1,v2;
        if(arr[i]<s[i-1])v1=s[i-1]-1;
        else if(arr[i]==s[i-1])v1=s[i-1];
        else v1=s[i-1]+1;
        if(arr[i]<s[i-1])v2=a[i-1]-1;
        else if(arr[i]==s[i-1])v2=a[i-1];
        else v2=a[i-1]+1;
        if(i==0)v2=0;
        a[i]=max(v1,v2);
    }
    cout<<max(s[n-1],a[n-1])<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}