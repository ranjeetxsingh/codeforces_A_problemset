#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int freq[128] = {0};
	int len = s.length();

	for (int i = 0; i < len; i++) {
		char ch = s[i];
		freq[ch]++;
	}

	int c = 0;

	for (int i = 0; i < 128; i++) {
		if (freq[i] != 0) {
			c++;
		}
	}

	if (c % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}
	else {
		cout << "IGNORE HIM!" << endl;
	}

	return 0;
}
