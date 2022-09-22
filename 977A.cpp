#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	while (k != 0) {
		k--;
		int d = n % 10;
		if (d == 0) {
			n = n / 10;
		}
		else {
			n--;
		}
	}

	cout << n << endl;

	return 0;
}
