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

	string love = "I love ";
	string hate = "I hate ";
	string that = "that ";
	string it = "it";

	string s = "";

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			s += love;
		}
		else {
			s += hate;
		}

		if (i == n) {
			s += it;
		}
		else {
			s += that;
		}
	}

	cout << s << endl;

	return 0;
}
