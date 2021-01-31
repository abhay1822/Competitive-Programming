#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int n;
    cin>>n;
    int a[n];
    ff(n){
        cin>>a[i];
    }
    ff(n){
        if(a[i]%2==0)
            a[i]--;
        cout<<a[i]<<" ";
    }


}