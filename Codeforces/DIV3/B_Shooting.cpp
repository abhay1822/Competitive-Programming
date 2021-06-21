#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    ff(n){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int s=0;
    ff(n)
        s+=v[i].first*i +1;
    cout<<s<<endl;
    for(auto &va:v)
        cout<<va.second<<" ";
    cout<<endl;
}