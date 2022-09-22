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

	int len = s.length();
	string upperCase = "";
	string lowerCase = "";
	int upperCaseChar = 0;
	int lowerCaseChar = 0;

	for (int i = 0; i < len; i++) {
		char ch = s[i];
		if (ch >= 'a' and ch <= 'z') {
			lowerCaseChar++;
			lowerCase += ch;
			ch = toupper(ch);
			upperCase += ch;
		}
		else {
			upperCaseChar++;
			upperCase += ch;
			ch = tolower(ch);
			lowerCase += ch;
		}
	}

	if (upperCaseChar > lowerCaseChar) {
		cout << upperCase << endl;
	}
	else {
		cout << lowerCase << endl;
	}

	return 0;
}
