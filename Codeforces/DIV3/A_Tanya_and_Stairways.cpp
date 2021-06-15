#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)
int main()
{
    int n,sum;
    cin>>n;
    int a[n];
    ff(n){
        cin>>a[i];
    }
    int s=sizeof(a) / sizeof(a[0]);
    cout<<count(a,a+s,1)<<endl;
    for (int i = 0; i < n; i++){
        if (a[i+1] == 1 || i==n-1)
            cout<<a[i]<<" ";
    }
}