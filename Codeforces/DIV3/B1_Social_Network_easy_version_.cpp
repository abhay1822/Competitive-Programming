#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
	cin >> n >> k;
	vector<int> a;
	for (int i = 0; i < n; ++i) {
		int id;
		cin >> id;
		if (find(a.begin(),a.end(),id)==a.end()) {
			if (int(a.size()) >= k) a.pop_back();
			a.insert(a.begin(), id);
		}
	
	}
    cout << a.size() << endl;
	for (auto it : a) cout << it << " ";
	cout << endl;
	
}