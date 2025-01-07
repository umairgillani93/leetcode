#include <bits/stdc++.h>

using namespace std;

void sortArrayByParity(vector<int>& nums) {
	vector<int> res = nums;
	int n = res.size();
	nums.clear();
	for (int i = 0; i < n; i++) {
		if (res[i] % 2 != 0) {
			nums.push_back(res[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (res[i] % 2 == 0) {
			nums.push_back(res[i]);
		}
	}

}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
