#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n,t=0;
    cin>>n;
    int a[n];
    ff(n)
        cin>>a[i];
    sort(a,a+n);
    
    ff(n){
        if(a[i]>=t+1)
            t++;    
    }
    cout<<t;
}