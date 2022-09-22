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

	int arr[n + 1] = {0};

	int x;
	cin >> x;

	int ax[x];
	for (int i = 0; i < x; i++) {
		cin >> ax[i];
		arr[ax[i]]++;
	}

	int y;
	cin >> y;

	int ay[y];
	for (int i = 0; i < y; i++) {
		cin >> ay[i];
		arr[ay[i]]++;
	}

	int flag = 0;

	for (int i = 1; i < n + 1; i++) {
		if (arr[i] == 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "I become the guy." << endl;
	}
	else {
		cout << "Oh, my keyboard!" << endl;
	}

	return 0;
}
