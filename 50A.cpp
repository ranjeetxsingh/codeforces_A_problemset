#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m, n;

	cin >> m >> n;

	int domino = 0;

	// m is rows and n is cols

	if (n % 2 == 0) {
		domino = (n / 2) * m;
	}
	else {
		domino = (n / 2) * m + m / 2;
	}

	cout << domino << endl;

	return 0;
}
