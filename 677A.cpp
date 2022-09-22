#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, h;
	cin >> n >> h;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int minWidth = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > h) {
			minWidth += 2;
		}
		else {
			minWidth++;
		}
	}

	cout << minWidth << endl;

	return 0;
}
