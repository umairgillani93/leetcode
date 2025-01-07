#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x;
	cin >> x;
	int count = 0;
	int i = 0; 
	int j = n - 1;
	while (i < j) {
		long long sum = a[j] + a[i];
		if (sum < x) {
			count += (j - i);
			i++;
		}
		else {
			j--;
		}
	}
	cout << count << '\n';
	return 0;
	
}
