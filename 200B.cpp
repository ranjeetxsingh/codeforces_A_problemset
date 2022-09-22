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

	float sum = 0;
	float result = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	result = sum / n;

	cout << result << endl;

	return 0;
}
