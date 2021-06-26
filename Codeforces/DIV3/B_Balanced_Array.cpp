#include <bits/stdc++.h>
 
using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)
 
int main(){
    int n,t;
    cin>>t;
    ff(t){
        cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++){
                cout<<i*2<<" ";
            }
            for(int i=1;i<=n;i+=2){
                if(i==n-1)
                    cout<<i+(n/2)<<endl;
                else if(i%2!=0)
                    cout<<i<<" ";
                
            }
        }
 
    }
}