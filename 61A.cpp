#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string a, b;
	cin >> a >> b;

	string s1 = "";
	for (int i = 0; i < a.length(); i++) {
		char ch1 = a[i];
		char ch2 = b[i];

		if (ch1 == ch2) {
			s1 += "0";
		}
		else {
			s1 += "1";
		}

	}

	cout << s1 << endl;

	return 0;
}
