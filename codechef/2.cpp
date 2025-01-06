#include <bits/stdc++.h>

using namespace std;

int sol() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int i = 0; 
	int j = n - 1;
	sort(a.begin(), a.end());

	k = max(k, - k);
	bool found = false;


	while (i < n && j < n) {
		int diff = abs(a[i] - a[j]);
		if (diff == k && !(i == j)) {
			found = true;
			break;
		}
		else if (diff < k) {
			j++;
		}
		else if (diff > k) {
			i++;
		}
		if (i == j) {
			j++;
		}
	}

	cout << (found ? "1" : "0") << '\n';
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
