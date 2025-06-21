#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n,q;cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>fo(32,-1),so(32,-1);
    int ans=n;
    for(int i=0;i<n;i++){
        int ind=n-1-i;
        for(int j=0;j<31;j++){
            if((a[ind]&(1<<j))){
                if(fo[j]==-1)fo[j]=i;
                else if(so[j]==-1)so[j]=i;
            }
        }
    }
    // cout<<"fo "<<fo[0]<<" "<<fo[1]<<" "<<fo[2]<<"\n";
    // cout<<"so "<<so[0]<<" "<<so[1]<<" "<<so[2]<<"\n";
    while(q--){
        ans=n;
        int x; cin>>x;
        int val=-1;
        for(int j=30;j>=0;j--){
            if( (x&(1<<j)) && fo[j]==-1){break;}
            if(fo[j]==-1)continue; 
            if((x&(1<<j))){
                if(fo[j]!=-1){
                    val=max(val,fo[j]-1);
                }
                if(so[j]!=-1){
                    if(so[j]>val)ans=min(ans,so[j]);
                    
                }
            }
            else{
                if(fo[j]>val){
                    ans=min(ans,fo[j]);
                    if(so[j]==-1){
                        break;
                    }
                }
                
                 
            }
        }
        cout<<ans<<" ";
    }
    cout<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}