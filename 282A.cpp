#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int x = 0, n;

	cin >> n;

	string str[n];

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < n; i++) {
		char ch = str[i][1];
		if (ch == '+') {
			++x;
		}
		if (ch == '-') {
			--x;
		}
	}

	cout << x << endl;


	return 0;
}
