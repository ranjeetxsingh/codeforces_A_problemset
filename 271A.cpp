#include<bits/stdc++.h>
using namespace std;

const int N = 0;


bool isEveryDigitDistinct(int n) {
	string s = "";
	int a = n;
	int count = 0;

	while (a != 0) {
		int d = a % 10;
		a = a / 10;
		s += to_string(d);
		count++;
	}

	for (int i = 0; i < count; i++) {
		char ch1 = s[i];
		for (int j = i + 1; j < count; j++) {
			char ch2 = s[j];
			if (ch1 == ch2) {
				return false;
			}
		}
	}

	return true;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int year;
	cin >> year;

	bool found = false;

	while (!found) {
		year++;
		if (isEveryDigitDistinct(year)) {
			cout << year << endl;
			found = true;
			return 0;
		}
	}

	return 0;
}
