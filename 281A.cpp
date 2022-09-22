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

	string str = "";

	char ch = toupper(s[0]);

	str = str + ch;

	for (int i = 1; i < len; i++) {
		ch = s[i];
		str += ch;
	}

	cout << str << endl;

	return 0;
}
