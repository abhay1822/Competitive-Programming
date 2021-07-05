#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)

int main(){
    int n;
    cin>>n;
    multiset<int>s;
    ff(n){
        int a;
        cin>>a;
        s.insert(a);
    }
    auto it=s.end();
    --it;
    cout<<*it<<" ";
    for(int i=1;i<*it;i++){
        if(*it%i==0)
            s.erase(s.find(i));
    }
    it--;
    cout<<*it;

    

}