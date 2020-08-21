#include <bits/stdc++.h>
using namespace std;

// Find Subsets of given a string
// Input - abc
// Output - " ",a,ab,abc,ac,b,bc,c

void filter(int n, char a[]) {
	for (int i = 0; n > 0; i++) {
		if ((n & 1) == 1)
			cout << a[i];
		n = n >> 1;
	}
	cout << endl;
}

void printSubsets(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < (1 << n); ++i) {
		filter(i, a);
	}
}

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	char a[20];
	cin >> a;
	printSubsets(a);

	return 0;
}