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

	int pos[n][2];
	int i = 1;

	for (int k = 0; k < n; k++) {
		int a;
		cin >> a;
		pos[k][0] = a;
		pos[k][1] = i++;
	}

	int arr[n + 1] = {0};

	for (int k = 1; k < n + 1; k++) {
		arr[pos[k - 1][0]] = pos[k - 1][1];
	}

	for (int k = 1; k < n + 1; k++) {
		cout << arr[k] << " ";
	}

	cout << endl;



	return 0;
}
