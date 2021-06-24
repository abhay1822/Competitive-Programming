#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int t,n;
    cin>>t;
    ff(t){
        cin>>n;
        set<pair<int,int>> s;
        ff(n){
            int a,b;
            cin>>a>>b;
            s.insert({a,b});
        }
        int c=0,d=0;
        string sa;
        for(auto &si:s){
            int r=si.first-c;
            int u=si.second-d;
            if(r<0 || u<0){
                cout<<"NO"<<endl;
                 n=0;   
                break; 
               
            }
            sa+=string(r,'R');
            sa+=string(u,'U');
            c=si.first;
            d=si.second;
        }
        if(n)
            cout<<"YES"<<endl<<sa<<endl;
        n=1;
    }
    return 0;
}