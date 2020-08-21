#include <bits/stdc++.h>
using namespace std;

// Replace bit in N by M

// 1st clear the bit
int clearRange_i_j(int n, int i, int j) {
	int ones = -1;
	int mask_left = ones << j;
	int mask_right = ~(ones << i);

	int mask = mask_left | mask_right;

	return n & mask;
}

int merge(int n, int m, int i, int j) {
	n = clearRange_i_j(n, i, j);
	m = m << i;

	return n | m;
}

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

// You are given 2 32-bit numbers, N and M,
// and two bit positions, i and j. Write a
// method to set all bits between i and j
// in N equal To M(e.g M becomes a subs
// tring of N Located at i and staring at j)

// Example:
// inpue: N = 10000000000
// M = 10101, i=2, j =6
// output: N =10001010100

	int n = pow(2, 10);
	int m = 21;
	int i = 2;
	int j = 6;
	cout << merge(n, m, i, j) << endl;

}