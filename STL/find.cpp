#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 10, 11, 9, 100};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	cin >> key;

	auto it = find(arr, arr + n, key);
	int index = it - arr;
	if (index == n)
		cout << "key is not present" << endl;
	else
		cout << "key is present at " << index << endl;


}