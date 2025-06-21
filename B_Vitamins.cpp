#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        int p;string s; cin>>p>>s;
        sort(s.begin(),s.end());
        if(mp.find(s)==mp.end())mp[s]=p;
        else mp[s]=min(mp[s],p);
    }
    vector<pair<string,int>>v;
    for(auto &[s,p]:mp){
        v.push_back({s,p});
    }
    // for(auto [s,p]:v){
    //     cout<<s<<" "<<p<<"\n";
    // }
    int ans=INT_MAX;
    int m=v.size();
    for(int i=0;i<m;i++){
        int c=0,A=0,B=0,C=0;
        for(auto it:(v[i].first)){
            if(it=='A')A++;
            if(it=='B')B++;
            if(it=='C')C++;
        }
        c+=v[i].second;
        if(A>0 && B>0 && C>0)ans=min(ans,c);
        for(int j=i+1;j<m;j++){

            for(auto it:(v[j].first)){
                if(it=='A')A++;
                if(it=='B')B++;
                if(it=='C')C++;
            }
            c+=v[j].second;
            if(A>0 && B>0 && C>0)ans=min(ans,c);
            for(int k=j+1;k<m;k++){

                for(auto it:(v[k].first)){
                    if(it=='A')A++;
                    if(it=='B')B++;
                    if(it=='C')C++;
                }
                c+=v[k].second;
                if(A>0 && B>0 && C>0)ans=min(ans,c);
                for(auto it:(v[k].first)){
                    if(it=='A')A--;
                    if(it=='B')B--;
                    if(it=='C')C--;
                }
                c-=v[k].second;
            }
            for(auto it:(v[j].first)){
                if(it=='A')A--;
                if(it=='B')B--;
                if(it=='C')C--;
            }
            c-=v[j].second;
        }
        
    }
    if(ans!=INT_MAX)cout<<ans<<"\n";
    else cout<<"-1\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}