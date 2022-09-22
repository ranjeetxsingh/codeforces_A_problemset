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

	int arr[n][2] = {0};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}

	int maxTramCapacity = 0;
	int currentCapacity = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0) {
				currentCapacity -= arr[i][j];
				if (currentCapacity > maxTramCapacity) {
					maxTramCapacity = currentCapacity;
				}
			}
			else {
				currentCapacity += arr[i][j];
				if (currentCapacity > maxTramCapacity) {
					maxTramCapacity = currentCapacity;
				}
			}
		}
	}

	cout << maxTramCapacity << endl;


	return 0;
}
