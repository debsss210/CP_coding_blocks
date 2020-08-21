#include <iostream>
using namespace std;

int Expo_pow(int a, int n) {
	int ans = 1;
	while (n > 0) {
		if (n & 1)
			ans = ans * a;
		a = a * a;  // square the value of a
		n = n >> 1; // discard the last bit of n
	}
	return ans;

	// return 0;
}

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int a, n;
	cin >> a >> n;
	cout << Expo_pow(a, n) << endl;

	return 0;
}