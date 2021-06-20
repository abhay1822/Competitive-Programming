#include <bits/stdc++.h>
using namespace std;

#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int n,t;
    cin>>n;
    ff(n){
        cin>>t;
        int a[t];
        ff(t)
            cin>>a[i];
        int m=INT_MAX,c=0;
        for(int i=t-1;i>=0;i--){
            if(a[i]>m)
                c++;
            m=min(a[i],m);
        }
        cout<<c<<endl;
    }
}