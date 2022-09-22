#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[4];

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + 4);

	int c = 0;

	for (int i = 0; i < 3; i++) {
		if (arr[i] == arr[i + 1]) {
			c++;
		}
	}

	cout << c << endl;

	return 0;
}
