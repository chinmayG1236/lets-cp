#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int x,N,M;cin>>x>>N>>M;
    int minv=x,maxv=x;
    int n=N,m=M;
    // while((n>0 || m>0) && minv>0){
    //     if(minv==1){
    //         if(n>0){
    //             minv=0;
    //             break;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     if(minv%2 == 0){
    //         if(m>0){
    //             minv/=2;
    //             m--;
    //         }
    //         else{
    //             minv/=2;
    //             n--;
    //         }
    //     }
    //     else{
    //         if(n>0){
    //             minv/=2;
    //             n--;
    //         }
    //         else{
    //             minv/=2; minv++;
    //             m--;
    //         }
    //     }
    // }
    while(m>0 && minv>0){
        if(minv==1)break;
        if(minv%2==1){
            minv/=2; minv++;
        }
        else{
            minv/=2;
        }
        m--;
    }
    while(n>0 && minv>0){
        minv/=2; n--;
    }

    n=N;m=M;
    // while((n>0 || m>0) && maxv>0){
    //     if(maxv==1){
    //         if(n>0){
    //             maxv=0;
    //             break;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     if(maxv%2 == 1){
    //         if(m>0){
    //             maxv/=2; maxv++;
    //             m--;
    //         }
    //         else{
    //             maxv/=2;
    //             n--;
    //         }
    //     }
    //     else{
    //         if(n>0){
    //             maxv/=2;
    //             n--;
    //         }
    //         else{
    //             maxv/=2;
    //             m--;
    //         }
    //     }
    // }
    while(n>0 && maxv>0){
        maxv/=2; n--;
    }
    if(maxv>0){
        while(m>0){
            if(maxv==1){
                break;
            }
            if(maxv%2==1){
                maxv/=2; maxv++;
            }
            else{
                maxv/=2;
            }
            m--;
        }
        
    }

    cout<<minv<<" "<<maxv<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}