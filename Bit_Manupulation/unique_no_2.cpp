#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int a[100000];

	int no;
	int x0r = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		a[i] = no;
		x0r = x0r ^ no;
	}
	// x0r = a^b;
	// it can never be 0 i.e have atleast one set bit

	int pos = 0;
	int temp = x0r;
	while ((temp & 1) == 0) {
		temp = temp >> 1;
		pos++;
	}

	// the first bit in x0r is at position "pos"
	int mask = (1 << pos);
	int num1 = 0; // 7

	// first those number which contain set bit at those position
	for (int i = 0; i < n; ++i)
	{
		if (mask == (a[i]&mask))
			num1 = num1 ^ a[i];
	}

	int num2 = x0r ^ num1;  // 3

	if (num1 > num2) {
		cout << num2 << " " << num1 << endl;
	}
	else
		cout << num1 << " " << num2 << endl;
}