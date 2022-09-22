#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];

	int minIdx = -1;
	int maxIdx = -1;
	int maxNum = -1;
	int minNum = 1000;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		if (arr[i] < minNum) {
			minNum = arr[i];
			minIdx = i;
		}
		if (arr[i] > maxNum) {
			maxNum = arr[i];
			maxIdx = i;
		}
	}

	int ans = maxIdx + (n - (minIdx + 1));

	cout << ans << endl;

	return 0;
}
