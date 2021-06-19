#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main()
{
    int n,a,k,l,r;
    
    cin>>n;
    ff(n){
        int c=0;
        cin>>a;
        int b[a];
        cin>>k;
        map<int,int> m;
        ff(a){
            cin>>b[i];
            l=b[i]-k;
            r=b[i]+k;
            for(int j=l;j<=r;j++){
                 m[j]++;  
            }
        }
        sort(b,b+a);        
        for(auto &val:m){
                if(val.second>c && val.first>0){
                    c=val.second;
                }
         }
         if(b[0]+k<b[a-1]-k){
             cout<<-1<<endl;
             continue;
         }
        int d=0;
         for(auto &va:m){
             if(c==va.second){
                if(va.first>d)
                    d=va.first;
             }
         }
         cout<<d<<endl;
         
    }
    return 0;
}