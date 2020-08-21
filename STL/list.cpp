#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	// Init
	list<int> l;

	// Different datatype
	list<string> l2{"apple", "mango", "banana", "guava"};
	l2.push_back("Pineapple");

	// sort
	l2.sort();

	// reverse
	l2.reverse();

	// pop_front()
	cout << l2.front() << endl;
	l2.pop_front();

	// add to the front
	l2.push_front("kiwi");
	cout << l2.back() << endl;
	l2.pop_back();

	// iterate over the list and print the data

	for (auto it = l2.begin(); it != l2.end(); it++) {
		cout << *it << ",";
	}
	cout << endl;

	// add more elements in the list
	l2.push_back("lemon");
	l2.push_back("orange");

	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;

	// remove according to the element
	string fruit;
	// cin >> fruit;
	// l2.remove(fruit);

	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;

	// removes according to the index
	auto it = l2.begin();
	it++;
	it++;

	l2.erase(it);
	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;

	// insert using iterator
	it = l2.begin();
	it++;

	l2.insert(it, "FruitJuice");
	for (string s : l2) {
		cout << s << " ";
	}
	cout << endl;


}