#include <bits/stdc++.h>
using namespace std;

// First method(O(logn))
int countBits(int n) {
	int count = 0;
	while (n > 0) {
		count = count + (n & 1);
		n = n >> 1;
	}
	return count;
}


// Second method(O(no. of set bits))
int countBitsFast(int n) {
	int count = 0;
	while (n > 0) {
		n = n & (n - 1);
		count++;
	}
	return count;
}


// Third method
// __builtin_popcount method

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n = 45;
	cout << countBits(n) << endl;
	cout << countBitsFast(n) << endl;
	cout << __builtin_popcount(n) << endl;

}