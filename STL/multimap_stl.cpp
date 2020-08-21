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

	multimap<char, string> m;

	for (int i = 0; i < n; ++i)
	{
		char ch;
		string s;
		cin >> ch >> s;
		m.insert(make_pair(ch, s));
	}

	// erase
	auto it = m.begin();
	m.erase(it);

	auto it2 = m.lower_bound('b'); // banana
	auto it3 = m.upper_bound('d'); // elephant

	for (auto z = it2; z != it3; z++) {
		cout << z->second << endl;
	}

	// search and erase cat
	auto f = m.find('c');
	if (f->second == "cat")
		m.erase(f);

	// print the entire map
	for (auto p : m) {
		cout << p.first << " -> " << p.second << endl;
	}

}