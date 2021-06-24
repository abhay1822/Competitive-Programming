#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int q;
    cin>>q;
    ff(q){
        unordered_map<char,int>m={{'L',0},{'R',0},{'U',0},{'D',0}};
        string s;
        cin>>s;
        for(auto &a:s)
            m[a]++;
        int x=min(m['L'],m['R']);
        int y=min(m['U'],m['D']);
        if(x==0 || y==0){
            if(x==0 && y==0)
                cout<<0<<endl;
            else if(x==0)
                cout<<2<<endl<<"UD"<<endl;
            else
                cout<<2<<endl<<"LR"<<endl;
        }
        else{
            string ss;
            ss+=string(x,'L');
            ss+=string(y,'U');
            ss+=string(x,'R');
            ss+=string(y,'D');
            cout<<ss.size()<<endl<<ss<<endl;
        }
    }
}