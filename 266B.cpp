#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, t;

	cin >> n >> t;

	string s;
	cin >> s;

	char str[n];

	for (int i = 0; i < n; i++) {
		str[i] = s[i];
	}

	while (t > 0) {

		for (int i = 0; i < n - 1; i++) {
			char ch1 = s[i];
			char ch2 = s[i + 1];

			if (ch1 == 'B' and ch2 == 'G') {
				str[i] = ch2;
				str[i + 1] = ch1;
			}

		}
		s = str;
		t--;
	}

	for (char item : str) {
		cout << item ;
	}
	cout << endl;


	return 0;
}
