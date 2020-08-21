#include <bits/stdc++.h>
using namespace std;
#define ll long long

void multilply(ll *a, ll &n, ll no) {

	ll carry = 0;
	for (ll i = 0; i < n; ++i)
	{
		ll product = a[i] * no + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	while (carry) {
		a[n] = carry % 10;
		carry = carry / 10;
		n++;
	}

}

void big_factorial(ll number) {

	ll *a = new ll[10000000];
	for (ll i = 0; i < 10000000; ++i)
	{
		a[i] = 0;
	}
	a[0] = 1;
	ll n = 1;

	for (ll i = 2; i <= number; ++i)
	{
		multilply(a, n, i);
	}

	// prll the count
    ll count=0;
	for (ll i = 0; a[i] == 0; i++)
	{
		count++;
	}
    cout<<count<<endl;

	delete [] a;
	return ;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	// for getting input from input1.txt
// 	freopen("input.txt", "r", stdin);
// 	// for writing output from output1.txt
// 	freopen("output.txt", "w", stdout);
// #endif

	ll n;
	cin >> n;
	big_factorial(n);
	return 0;
}