#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, t;
	cin >> s >> t;

	int end = s.length() - 1;
	int start = 0;
	int len = end;
	int flag = 0;

	while (start <= len) {
		char ch1 = s[start++];
		char ch2 = t[end--];

		if (ch1 != ch2) {
			flag = 1;
			break;
		}

	}

	if (flag == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}


	return 0;
}
