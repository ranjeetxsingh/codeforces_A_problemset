#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;

	int count = 0;

	while (n != 0) {
		int d = n % 10;
		if (d == 4 or d == 7) {
			count++;
		}
		n = n / 10;
	}

	if (count == 4 or count == 7) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}
