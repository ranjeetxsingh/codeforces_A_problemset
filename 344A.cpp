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

	string s[n];

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}

	int magnetGroup = 1;
	char prevSide = s[0][0];

	for (int i = 1; i < n; i++) {
		char currentSide = s[i][0];
		if (prevSide != currentSide) {
			magnetGroup++;
		}
		prevSide = currentSide;
	}

	cout << magnetGroup << endl;

	return 0;
}
