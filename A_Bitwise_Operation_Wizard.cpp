#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    int j=0;
    for(int i=1;i<n;i++){
        cout<<"? "<<j<<" "<<j<<" "<<i<<" "<<i<<endl;
        char ch; cin>>ch;
        if(ch=='<')j=i;
    }
    int ind=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        cout<<"? "<<j<<" "<<ind<<" "<<j<<" "<<i<<endl;
        char ch; cin>>ch;
        if(ch=='<'){
            v.clear();v.push_back(i);ind=i;
        }
        else if(ch=='='){
            v.push_back(i);
        }
    }
    ind=v[0];
    for(auto it:v){
        cout<<"? "<<ind<<" "<<ind<<" "<<it<<" "<<it<<endl;
        char ch; cin>>ch;
        if(ch=='>')ind=it;
    }
    cout<<"! "<<j<<" "<<ind<<endl;

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}