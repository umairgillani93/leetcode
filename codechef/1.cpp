#include <bits/stdc++.h>

using namespace std;

int sol() {
	int n;
	cin >> n;
	set<int> a;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.insert(x);
	}
	cout << a.size() << '\n';
	for (auto &s : a) {
		cout << s << " ";
	}
	cout << '\n';
	return 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;
}
