#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int t,m,n;
    cin>>t;
    ff(t){
        cin>>m>>n;
        int a[m],p[n];
        ff(m)
            cin>>a[i];
        ff(n)
            cin>>p[i];
        bool ok=1;
        while(ok){
            ok=0;
            ff(n){
                if(p[i]<m  && a[p[i]-1]>a[p[i]]){
                    swap(a[p[i]-1],a[p[i]]);
                    ok=1;
                }
            }
        }
        // ff(n){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        ok=1;
        for(int i=1;i<m;i++){
            if(a[i]<a[i-1]){
                ok=0;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;

}