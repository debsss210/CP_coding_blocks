#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, no;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 1; i < n ; ++i)
	{
		cin >> no;
		pq.push(no);
	}
	for (int i = 1; i <= n; ++i)
	{
		if (i != pq.top()) {
			cout << i << endl;
			exit(0);
		}
		pq.pop();
	}
}