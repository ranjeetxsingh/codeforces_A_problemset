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

	int anton = 0, danik = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			anton++;
		}
		else {
			danik++;
		}
	}

	if (anton > danik) {
		cout << "Anton" << endl;
	}
	else if (anton < danik) {
		cout << "Danik" << endl;
	}
	else {
		cout << "Friendship" << endl;
	}

	return 0;
}
