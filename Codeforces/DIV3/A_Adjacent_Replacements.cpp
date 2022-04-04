#include <bits/stdc++.h>

using namespace std;
#define fff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int n;
    cin>>n;
    int a[n];
    fff(n){
        cin>>a[i];
    }
    fff(n){
        if(a[i]%2==0)
            a[i]--;
        cout<<a[i]<<" ";
    }


}
