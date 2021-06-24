#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int t,n,k,s;
    cin>>t;
    ff(t){
        cin>>n>>k;
        int ti=n-n%k;
        ti+=min(n%k,k/2);
        cout<<ti<<endl;
       
    }
}