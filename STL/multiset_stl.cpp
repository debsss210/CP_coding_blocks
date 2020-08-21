#include <bits/stdc++.h>
using namespace std;

typedef multiset<int>::iterator It;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 20, 30, 20, 10, 30, 10, 30, 30};
	int n = sizeof(arr) / sizeof(int);
	multiset<int> m(arr, arr + n);

	// erase - 20
	m.erase(20);

	// Insert
	m.insert(76);

	// count
	cout << "Count : " << m.count(10) << endl;

	// Iterate
	for (int x : m) {
		cout << x << " ";
	}
	cout << endl;

	// find
	auto it = m.find(30); // 1st element = 30
	cout << *it << endl;

	// get all elements which are equal to 30
	// 1st to the starting 30 and 2nd to after the ending 30
	pair<It, It> p = m.equal_range(30);

	for (auto it = p.first; it != p.second; it++) {
		cout << *it << " - ";
	}
	cout << endl;

	// lower bound >= and upper bound >
	for (auto j = m.lower_bound(10); j != m.upper_bound(80); j++) {
		cout << *j << " -> ";
	}
}