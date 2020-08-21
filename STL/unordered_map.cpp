#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	unordered_map<string, int> um;


	// Insert
	// 1:-
	um.insert(make_pair("Mango", 60));

	// 2:-
	pair<string, int> p;
	p.first = "Apple";
	p.second = 120;
	um.insert(p);

	// 3:-
	um["Banana"] = 40;


	// Search
	string fruit;
	cin >> fruit;

	// update the price
	um[fruit] += 28;

	auto it = um.find(fruit);
	if (it != um.end())
		cout << "Price of " << fruit << " is " << um[fruit] << endl;
	else
		cout << fruit << " is not found" << endl;

	// Erase
	um.erase(fruit);

	// another way of finding a particular map
	// it stores unique keys only once
	if (um.count(fruit))
		cout << "Price is " << um[fruit] << endl;
	else
		cout << fruit << " is not present" << endl;


	um["orange"] = 59;
	um["pineapple"] = 89;

	// Iterate over all the key value pairs
	for (auto it = um.begin(); it != um.end(); it++) {
		cout << it->first << " -> " << (*it).second << endl;
	}

	// for each loop
	for (auto p : um) {
		cout << p.first << " -> " << p.second << endl;
	}
}