#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,m;cin>>n>>m;
    
    vector<vector<int>>adjs(n+1),adjo(n+1);
    for(int i=0;i<m;i++){
        int x,y; string s; cin>>x>>y>>s;
        if(s=="imposter"){
            adjo[x].push_back(y);
            adjo[y].push_back(x);
        }
        else{
            adjs[x].push_back(y);
            adjs[y].push_back(x);
        }
    }
    vector<int>b(n+1,-1);
    int tim=0;
    for(int i=1;i<=n;i++){
        if(b[i]!=-1)continue;
        int t=0,cm=0;
        queue<int>q;
        b[i]=1; q.push(i);
        while(!q.empty()){
            t++;
            int m=q.front(); q.pop();
            bool bh=b[m];
            if(bh==1)cm++;
            for(auto it:adjs[m]){
                if(b[it] == -1){q.push(it);b[it]=bh;continue;}
                if(b[it]!=bh){
                    cout<<"-1\n";return;
                }

            }
            for(auto it:adjo[m]){
                if(b[it] == -1){q.push(it);b[it]= !bh;continue;}
                if(b[it]==bh){
                    cout<<"-1\n";return;
                }
            }
        }
        tim+=max(cm,t-cm);
    }
    cout<<tim<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}