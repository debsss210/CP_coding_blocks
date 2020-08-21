#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 20, 40, 40, 40, 70, 90, 100};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	cin >> key;

	bool present = binary_search(arr, arr + n, key);
	if (present)
		cout << key << " is present" << endl;
	else
		cout << key << " is not present" << endl;

	//Two more things
	// Get the index of the element
	// lower_bound(s,e,key) and upper_bound(s,e,key)

	auto lb = lower_bound(arr, arr + n, key);
	cout << "Lower bound of 40 is " << lb - arr << endl;

	auto ub = upper_bound(arr, arr + n, key);
	cout << "Upper bound of 40 is " << ub - arr << endl;

	cout << "Frequency of 40 is " << ub - lb << endl;

}