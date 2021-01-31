#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,b=1;
    cin>>n>>k;
    int a[n];
    map<int,int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v[a[i]]=i;
    }
    if(v.size()<k)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[a[i]]==i && b<=k){
                cout<<i+1<<" ";
                b++;
            }
        }
    }
}