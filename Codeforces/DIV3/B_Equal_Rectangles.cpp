#include <bits/stdc++.h>
using namespace std;

#define ff(n) for(int i = 0; i <n ; ++ i)
int main(){
    int q ;
    cin>>q;
    ff(q){
        int n;
        cin>>n;
        int r=4*n;
        int a[r];
        ff(r){
            cin>>a[i];
        }
        sort(a,a+r);
        int ar=a[0]*(a[r-1]);
        bool ok = true;
		for (int i = 0; i < n; ++i) {
			int lf = i * 2, rg = 4 * n - (i * 2) - 1;
			if (a[lf] != a[lf + 1] || a[rg] != a[rg - 1] || a[lf] * 1ll * a[rg] != ar) {
				ok = false;
			}
		}
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;

        
    }
    return 0;
}
