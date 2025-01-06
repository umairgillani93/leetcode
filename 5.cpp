#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
			
		vector<int> res;
		int curr = 1;
			
		for (int i = 0; i < n - 1; i++) {
			if (a[i + 1] - a[i] > 2) {
				res.push_back(curr);
				curr = 1;
			}
			else {
				curr++;

			}
		}
		res.push_back(curr);

		int w = *min_element(res.begin(), res.end());
		int b = *max_element(res.begin(), res.end());

		cout << w << " " << b << '\n';
	}

	return 0;
}
