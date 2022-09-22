#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;

	long long int result;

	if (n % 2 == 0) {
		long long int even = n / 2;
		long long int sumEven = even * (even + 1);

		long long int odd = n / 2;
		long long int sumOdd = odd * odd;

		result = sumEven - sumOdd;
	}
	else {
		long long int even = (n - 1) / 2;
		long long int sumEven = even * (even + 1);

		long long int odd = even + 1;
		long long int sumOdd = odd * odd;

		result = sumEven - sumOdd;
	}

	cout << result << endl;

	return 0;
}
