#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		unordered_map<int, int> hash1;
		unordered_map<int, int> hash2;

		for (int i = 0; i < n; i++) {
			hash1[a[i]]++;
			hash2[b[i]]++;
		}

		int ans = 0;
		for (auto it = hash1.begin(); it != hash1.end(); it++) {
			if (hash2[it -> first]) ans++;
		}
		cout << ans << '\n';
	}
	return 0;

}
