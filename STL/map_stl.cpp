#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	map<string, int> m;


	// Insert
	// 1:-
	m.insert(make_pair("Mango", 60));

	// 2:-
	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;
	m.insert(p);

	// 3:-
	m["Banana"] = 40;


	// Search
	string fruit;
	cin >> fruit;

	// update the price
	m[fruit] += 28;

	auto it = m.find(fruit);
	if (it != m.end())
		cout << "Price of " << fruit << " is " << m[fruit] << endl;
	else
		cout << fruit << " is not found" << endl;

	// Erase
	m.erase(fruit);

	// another way of finding a particular map
	// it stores unique keys only once
	if (m.count(fruit))
		cout << "Price is " << m[fruit] << endl;
	else
		cout << fruit << " is not present" << endl;


	m["orange"] = 59;
	m["pineapple"] = 89;

	// Iterate over all the key value pairs
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << it->first << " -> " << (*it).second << endl;
	}

	// for each loop
	for (auto p : m) {
		cout << p.first << " -> " << p.second << endl;
	}
}