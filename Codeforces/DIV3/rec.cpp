#include <bits/stdc++.h>

using namespace std;

vector<string> v;
void gen(string &s,int o ,int c){
    cout<<s<<endl;
    if(o==0 &c==0 ){
        v.push_back(s);
        return;
    }
    if(o>0){
        s.push_back('(');
        gen(s,o-1,c);
        s.pop_back();
    }
    if(c>0){
        if(o<c){
            s.push_back(')');
            gen(s,o,c-1);
            s.pop_back();
        }
    }
    
}
int main(){
    string s;
    int n;;
    cin>>n;
    gen(s,n,n);
}   