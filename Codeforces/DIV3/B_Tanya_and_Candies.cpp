#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)

int main(){
    int n, sum1 = 0,sum0=0;
	cin >> n ;
    int a[n];
	int ts = 0;
	for (int i = 0 ; i < n ; i++){ 
		cin >> a[i];
		ts += a[i];
        if(i%2!=0)
            sum1 += a[i];
	}
	
	int c = 0;
	for(int i = 0; i < n; i++){
		if(i % 2!=0)
			sum1 = ts - sum0 - a[i]; 
		else
			sum0 = ts - sum1 - a[i];
		
		if(sum0 == sum1)
			c++;
	}
	cout <<c;
}