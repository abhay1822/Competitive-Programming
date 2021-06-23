#include <bits/stdc++.h>

using namespace std;
#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int q,n;
    cin>>q;
    ff(q){
        cin>>n;        
        vector<int> a(n);
		for (int j = 0; j < n; ++j)
			cin >> a[j];
		int pos = 0;
		while (pos < n) {
			int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
			int el = a[nxt];
			a.erase(a.begin() + nxt);
			a.insert(a.begin() + pos, el);
			if (pos == nxt)
                pos = nxt + 1;
			else
                pos = nxt;
		}
		for (auto it : a)
            cout << it << " ";
		cout << endl;
    }

}