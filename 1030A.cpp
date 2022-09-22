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
	int flag = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] == 1) {
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << "EASY" << endl;
	}
	else {
		cout << "HARD" << endl;
	}

	return 0;
}
