#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int s,n;
    cin>>n;
    ff(n){
        cin>>s;
        int su = 0;
        while(s >= 10){
            su += (s/10)*10;
            s = s%10 + s/10;
        }
        su += s;
        cout<<su<<'\n';
    }
       
}