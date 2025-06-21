#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n,k;cin>>n>>k;
    string s; cin>>s;
    vector<int>v(n,0);
    int x=0,ct=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1')ct++;
        else ct--;
        if(ct>=1){
            x++;
            v[i]=x;
            ct=0;
        }
    }
    int ans=n+1;
    int ps=0;
    for(int i=-1;i<n-1;i++){
        if(i>=0){
            if(s[i]==1){
                ps+=i;
            }
            else ps-=i;
        }
        if(v[i+1]==0)continue;
        int s=0,e=v[i+1];
        while(s<=e){
            int m=(s+e)/2;
            int tmp= ((i+m)*(i+m+1))/2 - (i*(i+1))/2 +ps+(v[i+1]-m)*(i+m+1);
            if(tmp>=k){
                int com=i+m+1;
                if(m!=v[i+1])com++;
                ans=min(ans,com);
                e=m-1;
            }
            else{
                s=m+1;
            }

        }
        s=0,e=v[i+1];
        if(i>=0)while(s<=e){
            int m=(s+e)/2;
            int tmp= (m*(m+1))/2 + (v[i+1]-m)*(m+1);
            int com=1+m;
            if(m!=v[i+1])com++;
            if(tmp>=k){
                ans=min(ans,com);
                e=m-1;
            }
            else{
                s=m+1;
            }

        }
    }
    if(ans<n+1)cout<<ans<<"\n";
    else cout<<"-1\n";
    // for(auto it:v)cout<<it<<" ";
    // cout<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}