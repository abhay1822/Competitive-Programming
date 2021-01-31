#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    
    int n,k,t=0;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]<=k)
            t++;
        else
        {

            for(int i=n-1;i>0;i--)
            {
                if(v[i]<=k)
                    t++;
                else
                    break;
            }
            break;
        }
    }

    cout<<t;
}

