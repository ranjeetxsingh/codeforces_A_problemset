#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2;

	cin >> s1;
	cin >> s2;

	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

	int len1 = s1.length();
	int len2 = s2.length();

	if (len1 > len2) {
		cout << 1 << endl;
		return 0;
	}
	if (len1 < len2) {
		cout << -1 << endl;
		return 0;
	}

	char str1[len1];
	char str2[len2];

	int flag = 0;

	for (int i = 0; i < len1; i++) {
		str1[i] = s1[i];
		str2[i] = s2[i];

		if (s1[i] != s2[i]) {
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << "0" << endl;
		return 0;
	}

	if (lexicographical_compare(str1, str1 + len1, str2, str2 + len2)) {
		cout << "-1" << endl;
		return 0;
	}
	else {
		cout << "1" << endl;
		return 0;
	}

	return 0;
}
