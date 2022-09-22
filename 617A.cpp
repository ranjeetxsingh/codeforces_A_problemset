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

	int steps = 0;

	while (n != 0) {
		if (n >= 5) {
			n = n - 5;
			steps++;
		}
		else {
			n = 0;
			steps++;
		}
	}

	cout << steps << endl;


	return 0;
}
