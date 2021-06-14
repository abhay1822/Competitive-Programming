#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)

int main()
{
    int n,a,c=0,d=0;
    vector<int> v,vi;
    cin>>n;
    ff(n){
        cin>>a;
        v.push_back(a);
        vi.push_back(a);
    }
    for(int valu :v)
        vi.push_back(valu);
    for(int val :vi){
        if(val==1)
            d++;
        else 
            d=0;
        if(d>c)
            c=d;
    }      
    cout<<c;

}