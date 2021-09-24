#include <bits/stdc++.h>
using namespace std;

#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int t;
    cin>>t;
    char in[t][100];
    ff(t){
        cin>>in[i];
    }
    ff(t){
        string s = in[i];
        int v=0,c=0,a;
        map<char,int> m,d;
        if(s.length()==1){
            cout<<"Case #"<<i+1<<": "<<0<<endl;
            continue;
        }
        ff(s.length()){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||s[i]=='U'){
                v++;
                m[s[i]]++;
            }
            else
                d[s[i]]++;
        }
        // for(auto &as:m){
        //     cout<<(as.first)<<" "<<(as.second);
        // }
        auto as=m.begin();
        auto ds=d.begin();
        // cout<<v-(as->second);
        c=s.length()-v; 
       
        if(v<c || (as->second)>(ds->second)){
            if(v==0)
               as->second=0; 
            a=c+((v-(as->second))*2);
    
        }
        else{
            if(c==0)
                ds->second=0;
            a=v-((v-(ds->second))*2);
        }
        cout<<"Case #"<<i+1<<": "<<a<<endl;
    }
}
    