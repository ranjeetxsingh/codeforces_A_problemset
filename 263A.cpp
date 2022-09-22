#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int r = 5, c = 5;

	int arr[r][c];

	int x = 0, y = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 1) {
				x = i + 1 ;
				y = j + 1;

			}

		}
	}

	x = abs(3 - x);
	y = abs(3 - y);

	cout << (x + y) << endl;

	return 0;
}
