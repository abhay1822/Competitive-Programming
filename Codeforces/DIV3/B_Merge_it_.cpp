#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n,c,x,su=0;
    cin>>n;
    ff(n){
        cin>>c;
        int p=0,q=0,r=0;
        ff(c){
            
            cin>>x;
            x%=3;
            if(x==0)
                p++;
            else if(x==1)
                q++;
            else 
                r++; 
        }
        if(q>=r){
            q-=r;
            q/=3;
            su=p+q+r;
        }
        else{
            r-=q;
            r/=3;
            su=r+p+q;
        }
        cout<<su<<endl;
    }
    return 0;

}