#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k, n, w;
	cin >> k >> n >> w;
	int i = 2;
	int cost = k;
	int count = 0;
	while (w > 0) {
		count += cost;
		cost = k * i;
		i++;
		w--;
	}

	count = count - n;

	if (count < 0) {
		count = 0;
	}
	cout << count << endl;

	return 0;
}
