#include <bits/stdc++.h>
using namespace std;

void toBinary(int n) {
	int ans = 0, i = 1;
	while (n > 0) {
		ans += (n & 1) * i;
		n = n >> 1;
		i *= 10;
	}
	cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	toBinary(n);

}