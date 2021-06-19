#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n,q,k,r;
    cin>>q;
    ff(q){
        cin>>n>>k;
        int a[n];
        int c=0;
        ff(n){
            cin>>a[i];
            if(a[i]%2)
                c++;
        }
        if((c<k) || (c%2!=k%2)){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n,k>1;i++){
                if(a[i]%2){
                    k--;
                    cout<<i+1<<" ";
                }
            }
        }
        cout<<n<<endl;
    }

}