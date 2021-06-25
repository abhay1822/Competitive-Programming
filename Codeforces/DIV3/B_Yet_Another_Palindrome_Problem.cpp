#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int t,n;
    cin>>t;
    ff(t){
        cin>>n;
        vector<int> a(n);
        ff(n)
            cin>>a[i];
        bool ok=0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(a[i]==a[j]){
                    ok=1;
                    break;
                }
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}