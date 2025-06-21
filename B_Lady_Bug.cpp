#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string a,b; cin>>a>>b;
    int sa=0,sb=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]=='0')sa++;
            if(b[i]=='0')sb++;
        }
        else{
            if(b[i]=='0')sa++;
            if(a[i]=='0')sb++;
        }

    }
    int ra=n/2,rb=n/2;
    if(n%2==1)ra++;
    if(sa>=ra && sb>=rb){
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