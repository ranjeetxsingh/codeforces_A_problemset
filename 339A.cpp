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

	vector<int> v;

	for (int i = 0; i < len; i = i + 2) {
		char ch = s[i];
		int num = ch - 48; // because ascii value of 0 is 48
		v.push_back(num);
	}

	// now we will sort vector
	sort(v.begin(), v.end());

	int n = v.size();

	string s2 = "";

	for (int i = 0; i < n; i++) {
		string str = to_string(v[i]);
		if (i == (n - 1)) {
			s2 = s2 + str;
		}
		else {
			s2 = s2 + str + "+";
		}
	}

	cout << s2 << endl;

	return 0;
}
