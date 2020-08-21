#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 20, 11, 9, 8, 11, 10};
	int n = sizeof(arr) / sizeof(arr[0]);

	set<int> s;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);
	}

	//Erase
	s.erase(10);

	auto it2 = s.find(11);
	s.erase(it2);

	// Print all the elements
	for (auto it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}

}