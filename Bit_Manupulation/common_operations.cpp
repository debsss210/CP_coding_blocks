#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n) {
	// return 1 if odd and 0 if even
	return n & 1;
}


int getBit(int n, int i) { // from right
	// used to get the bit in the given position
	int mask = (1 << i);
	int bit = (n & mask) > 0 ? 1 : 0;

	return bit;
}


int setBit(int n, int i) {
	// used in setting the bit in the given position
	// i.e putting 1 in given position
	int mask = (1 << i);
	int bit = n | mask;

	return bit;
}


void clearBit(int &n, int i) {
	// used in clearing the bit in the given position
	// i.e putting 0 in given position
	int mask = ~(1 << i);
	n = n & mask;
}


void updateBit(int &n, int i, int v) {
	// used in updating the bit in the given position
	// i.e putting 0 or 1 in given position according to our choice
	// 1st clearing the bit then updating
	int mask = ~(1 << i);
	int cleared_bit_no = n & mask;

	n = cleared_bit_no | (v << i);
}


int clearLastBits(int n, int i) {
	// use in clearing the last bits upto i places
	int mask = (-1 << i);

	return n & mask;
}


int clearRange_i_j(int n, int i, int j) {
	int ones = (~0); // or -1
	int mask_left = ones << (j + 1);
	int mask_right = ~(ones << i);

	int mask = mask_left | mask_right;

	return n & mask;
}


int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	// int n = 5;
	// int i;
	// cin >> i;

	// cout << isOdd(5)<<endl;

	// cout << getBit(n, i) << endl;

	// cout << setBit(n, i) << endl;

	// clearBit(n, i);
	// cout << n << endl;

	// updateBit(n, i, 0);
	// cout << n << endl;

	// int m = 15;
	// int j = 2; // from 0 to position (i-1)
	// cout << clearLastBits(m, j) << endl;

	int m = 31;
	int i = 1;
	int j = 3;
	cout << clearRange_i_j(m, i, j) << endl;

}