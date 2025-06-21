#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){s[i]='a';x++;}
        if(s[i]=='I'){s[i]='b';y++;}
        if(s[i]=='T'){s[i]='c';z++;}
    }
    if(x==n || y==n || z==n){
        cout<<"-1\n"; return;
    }
    int tot=x+y+z;
    // cout<<"tot is "<<tot<<"\n";
    cout<<2*n<<"\n";
    map<char,int>ct;
    ct['a']=x;
    ct['b']=y;
    ct['c']=z;
    set<char>st; st.insert('a'); st.insert('b'); st.insert('c');
    for(int k=0;k<2*n;k++){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])continue;
            st.insert('a');
            st.insert('b');
            st.insert('c');
            st.erase(s[i]);
            st.erase(s[i+1]);
            char ch=*st.begin();
            if(ct[ch]<tot){
                string t;
                for(int j=0;j<s.size();j++){
                    t.push_back(s[j]);
                    if(j==i){t.push_back(ch);ct[ch]++;}
                    
                }
                s.resize(t.size());
                s=t;
                cout<<i+1<<"\n";
                // cout<<s<<"\n";
                break;
            }
            
        }
    }
    // cout<<s<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;cin>>t;
    while(t--)solve();
}