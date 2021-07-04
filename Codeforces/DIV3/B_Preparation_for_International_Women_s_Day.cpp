#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i < n; ++ i)

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(k);
	ff(n){
		int x;
		cin >> x;
		++a[x % k];
	}
    int ans = a[0] / 2;
    if(k%2==0)
        ans+=((a[k/2])/2);
    for(int i=1;i<(k+1)/2;i++){
        int j=k-i;
        ans+=min(a[i],a[j]);
    }
    cout<<(ans*2)<<endl;
    return 0;
}