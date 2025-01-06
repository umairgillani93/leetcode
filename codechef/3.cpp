#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		int curr = 0, best = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i < k) curr += a[i];
		}
		best = curr;

		for (int i = k; i < n; i++) {
			curr = curr + a[i] - a[i - k];
			best = max(best, curr);
		}
		cout << best << '\n';

	}
	return 0;
}
