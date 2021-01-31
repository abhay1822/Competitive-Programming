#include <bits/stdc++.h>
#include <vector>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)
int main()
{
    int n,t=0;
    cin>>n;
    int a[n],p;
    ff(n){
        cin>>a[i];
    }
    int as = sizeof(a) / sizeof(a[0]);
    sort(a, a + as);

    ff(n){
        p=1;
        while(a[i]==a[i+1]){
            p++;
            i++;
        }
        if(p>t)
            t=p;
    }
    cout<<t;
    return 0;
}