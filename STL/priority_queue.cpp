#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	priority_queue<int> pq_max;
	priority_queue<int, vector<int>, greater<int> > pq_min;


	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		pq_min.push(num);
	}

	while (!pq_min.empty()) {
		cout << pq_min.top() << " ";
		pq_min.pop();
	}
	cout << endl;
}