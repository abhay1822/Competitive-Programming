#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n,k=0;
    cin>>n;
    set<int> s;
    ff(n){
        int b;
        cin>>b;
        s.insert(b);
    }
    int l=s.size();
    int a[l];
    for(auto &va:s){
        a[k]=va;
        k++;
    }
    int su=accumulate(a,a+k,0);
    //cout<<su<<endl;
    if(l>3){
        cout<<-1;
        return 0;
    }
    else if(l==3){
        if((a[2]-a[1])==(a[1]-a[0]))
            cout<<a[1]-a[0];
        else 
            cout<<-1;
    }
    else if(l==2){
        if(su%2)
            cout<<(a[1]-a[0]);
        else 
            cout<<((a[1]-a[0])/2);
    }
    else 
        cout<<0;
}
