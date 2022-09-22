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
	string s;
	cin >> s;

	int count = 0;

	for (int i = 0; i < n - 1; i++) {
		char ch1 = s[i];
		char ch2 = s[i + 1];

		if (ch1 == ch2) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
