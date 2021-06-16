#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int n,a[10];
    string s; 
	cin >> n;
	cin >> s;
	for (int i = 1; i < 10; ++i){
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i){
		if (s[i]-'0' < a[s[i]-'0']) {
			s[i] = '0' + a[s[i] - '0'];
			for(int j=i+1;j<n;j++){
				if (s[j]-'0' <= a[s[j]-'0'])
					s[j] = '0' + a[s[j] - '0'];
				else{
					cout<<s;
					return 0;
				}

			}
			cout<<s;
			return 0;
		}

	}
	cout<<s;

}