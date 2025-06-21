#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<10000-1<<"\n";
        for(int a=2;a<=10000;a++)cout<<a<<" "<<a-1<<"\n";
        return;
    }
    int ct=0;
    int sn= (to_string(n)).size();
    vector<pair<int,int>>v;
    int ind=0;
    string str="";
    string st=to_string(n);
    while(str.size()<=7){
        str.push_back(st[ind]);
        ind++;if(ind>=st.size())ind=0;
        int ans=stoi(str);
        int sans= (to_string(ans)).size();
        int a= (ans-sans)/(n-sn);
        if((ans-sans)%(n-sn) !=0)continue;
        int b= a*n - ans;
        if(a<1 || a>10000)continue;
        if(b<1 || b>10000)continue;
        string t;
        
        for(int i=0;i<a;i++){
            for(int j=0;j<st.size();j++){
                t.push_back(st[j]);
                if(t.size()>=sans)break;
            }
            if(t.size()>=sans)break;
        }
        if(stoi(t)==ans)v.push_back({a,b});
    }
    cout<<v.size()<<"\n";
    for(auto it:v)cout<<it.first<<" "<<it.second<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}