#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,x;cin>>n>>x;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n==1){
        cout<<"0\n";return;
    }
    if(n==2){
        if(a[1]==1){
            cout<<"0\n";return;
        }
        cout<<"1\n";
        cout<<"1 2\n";
        return;
    }
    int ind;
    for(int i=1;i<=n;i++){
        if(a[i]==x){
            ind=i; break;
        }
    }
    swap(a[ind],a[1]);
    int l=1,r=n+1;
    while(r>l+1){
        if(r==l+2){
            break;
        }
        int m=(l+r)/2;
        if(a[m]<=x){
            l=m;
        }
        else r=m;
    }
    int y=(l+r)/2;
    cout<<"2\n";
    cout<<ind<<" "<<"1"<<"\n";
    cout<<y<<" "<<"1"<<"\n";



}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}