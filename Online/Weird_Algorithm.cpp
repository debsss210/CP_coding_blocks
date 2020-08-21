#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;
	cout << n << " ";
	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
			cout << n << " ";
		}
		else {
			n = 3 * n + 1;
			cout << n << " ";
		}
	}
	return 0;
}
