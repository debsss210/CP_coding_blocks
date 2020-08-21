#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	// making a array of fixed size-> O(1) space
	int n, no, c[64] = {0};
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> no;
		// update the array by extracting bit
		int j = 0;
		while (no > 0) {
			int last_bit = no & 1;
			c[j] += last_bit;
			j++;
			no = no >> 1;
		}
	}

	// iterate over the array and form the ans
	int p = 1, ans = 0;
	for (int i = 0; i < 64; ++i)
	{
		c[i] %= 3;
		ans += (c[i] * p);
		p *= 2;
	}

	//print the final ans
	cout << ans << endl;

}