#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
        cin>>a[i];
    for(int k=2,i=n-1;i>=0;i--,k++)
    {
        for(int j=n-k;j>=0;j--)
        {
            if(a[j]==0)
                continue;
            else if(a[i]==a[j])
                a[j]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        
        if(a[i]>0)
            t++;    
    }
    cout<<t<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            cout<<a[i]<<" ";
    }
}