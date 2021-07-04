#include <bits/stdc++.h>

using namespace std;
vector<vector<int>>subs;
void gen(vector<int> &sub,int i,vector<int>&a){
    if(i==a.size()){
        subs.push_back(sub);
        return;
    }
    gen(sub,i+1,a);

    sub.push_back(a[i]);
    gen(sub,i+1,a);
    sub.pop_back();
}
int main(){
    int n=3;
    vector<int> a={1,2,3};
    vector<int>e;
    gen(e,0,a);
    for(auto sub:subs){
        for(auto ele:sub)
            cout<<ele<<" ";
        cout<<endl;
    }
}