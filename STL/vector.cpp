#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	// Yao can create and initalise a vector
	vector<int> a;
	vector<int> b(5, 10); // five int with value 10 - init a vector of zeros (n,0)
	vector<int> c(b.begin(), b.end());

	vector<int> d{1, 2, 3, 10, 14};

	// iterate over vector
	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << " ";
	}
	cout << endl;

	for (auto it = c.begin(); it != c.end(); it++) {
		cout << *it << ",";
	}
	cout << endl;

	// for each loop
	for (int x : d) {
		cout << x << ":";
	}
	cout << endl;

	// some other function
	vector<int> v;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	for (int z : v) {
		cout << z << ",";
	}
	cout << endl;

	// understand at memory level whats the difference between v and d
	cout << v.size() << endl;
	cout << v.capacity() << endl;
	cout << v.max_size() << endl;

	cout << d.size() << endl;
	cout << d.capacity() << endl;
	cout << d.max_size() << endl;

	// to avoid doubling we use reserve function
	vector<int> vec;
	int n;
	cin >> n;

	vec.reserve(1000);
	for (int i = 0; i < n; i++) {
		int number;
		cin >> number;
		v.push_back(number);
		cout << "capacity" << vec.capacity() << endl;
	}

	cout << "capacity" << vec.capacity() << endl;


	for (int z : vec) {
		cout << z << ",";
	}
	cout << endl;
}