#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s,t; cin>>s; s="."+s;
    t=s;
    vector<int>v(n+1);for(int i=1;i<=n;i++)cin>>v[i];
    vector<bool>vis(n+1,0);
    vector<ll>num;
    for(int i=1;i<=n;i++){
        if(vis[i] || v[i]==i)continue;
        vector<int>cy={i};
        vis[i]=1;
        int tmp=v[i];
        while(!vis[tmp]){
            vis[tmp]=1;
            cy.push_back(tmp);
            tmp=v[tmp];
        }
        // cout<<"sz "<<cy.size()<<"\n";
        for(int rep=1;rep<=cy.size();rep++){
            char ch=t[cy[0]];
            for(int j=1;j<cy.size();j++){
                char tm=t[cy[j]];
                t[cy[j]]=ch;
                ch=tm;
            }
            t[cy[0]]=ch;
            int ok=1;
            for(auto it:cy){
                if(s[it]!=t[it]){
                    ok=0; break;
                }
            }
            if(ok){
                num.push_back(rep);
                break;
            }

        }
    }
    if(num.empty()){
        cout<<"1\n";return;
    }
    if(num.size()==1){
        cout<<max(num[0],1ll)<<"\n"; return;
    }
    ll lcm=(num[0]*num[1])/gcd(num[0],num[1]);
    for(int i=2;i<num.size();i++){
        lcm= (lcm*num[i])/gcd(lcm,num[i]);
    }
    cout<<lcm<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}