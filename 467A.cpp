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

	int arr[n][2] = {0};
	int count = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];

		if ((arr[i][1] - arr[i][0]) >= 2) {
			count++;
		}
	}

	cout << count << endl;



	return 0;
}
