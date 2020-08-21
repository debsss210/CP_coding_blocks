#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b; // in lexo graphical order
	return a.length() < b.length();
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
	cin.get();

	string s[100];

	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}

	// sort(s, s + n);
	sort(s, s + n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}


}