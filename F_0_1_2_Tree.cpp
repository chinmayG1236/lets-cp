#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int a,b,c;cin>>a>>b>>c;
    if(c==0){
        cout<<"-1\n";return;
    }
    if(a==0 && b==0 && c==1){
        cout<<"0\n";return;
    }
    if(a==0 && b==0 && c>1){
        cout<<"-1\n";return;
    }
    if(a==0 && b==1 && c==1){
        cout<<"1\n";return;
    }
    if(a==1 && b==0 && c==0){
        cout<<"-1\n";return;
    }
    if(a==0 && c>1){
        cout<<"-1\n";return;
    }
    if(a==0 && b>0 && c==0){
        cout<<"-1\n";return;
    }
    if(a==0){
        cout<<b<<"\n";return;
    }
    int tn=1,ln=1,h=0;
    while(tn+2*ln<=a){
        h++;
        tn+=2*ln;
        ln*=2;
    }
    int rn=a-tn; 
    if(rn==0){
        int vac=2*ln;
        if(vac!=c){
            cout<<"-1\n";return;
        }
        int eh=b/vac;
        if(b%vac!=0)eh++;
        cout<<h+eh+1<<"\n";return;
    }
    if(rn>0)h++;
    
    
    int y=0,x=rn/2; rn=rn-2*x;
    if(rn!=0)y++;
    int vac=2*x*2 + y*2 + y + (ln-x-y)*2;
    int lh= (ln-x-y)*2 + y;
    // if(rn==0)lh=0;
    if(vac != c){
        cout<<"-1\n";return;
    }
    
    b-=lh;
    if(b<=0){
        cout<<h+1<<"\n";return;
    }
    int eh=b/vac;
    if(b%vac != 0)eh++;
    cout<<h+eh+1<<"\n";

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}