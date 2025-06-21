#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int k;cin>>k;
    vector<int>v;
    int tpr=0;
    int tst=0;
    while(tpr<k){
        int val=2;
        for(int st=2;st<=500;st++){
            int npr= (st*(st-1))/2;
            if(tpr+npr>k)break;
            val=st;
        }
        v.push_back(val); tst+=val;
        tpr+=  (val*(val-1))/2;
    }
    cout<<tst<<"\n";
    int j=0;
    for(int i=0;i<v.size();i++){
        for(int x=0;x<v[i];x++){
            cout<<i<<" "<<j<<"\n";
            j++;
        }
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}