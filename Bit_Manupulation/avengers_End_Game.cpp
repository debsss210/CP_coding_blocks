#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
After the release of Avengers, Ironman and Thor got into a fight and
Ironman challenged Thor to find out the number of numbers between 1
and n which are divisible by any of the prime numbers less than 20.
Ironman being great at maths quickly answered the question but then
Thor asked him to write a program for it. Ironman however found it
quite difficult as he did not wanted to write so many lines of code.
he knows that you are smart and can code this up easily. Can you do it?

Input Format
The first line consists of number of test cases t. then follow t lines
which consists of number n for each test case.

Constraints
1 <= test cases <= 10 1 <= n <= 10^18

Output Format
the answer to each test case each in different line

Explanation
for n = 5 2 and 4 are divisible by 2 and 3 is divisible by 3 and 5 by 5.
hence ans = 4.

*/

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	ll t;
	cin >> t;

	ll primes[] = { 2, 3, 5, 7, 11, 13, 17, 19 };

	while (t > 0) {
		ll no;
		cin >> no;

		ll subsets = (1 << 8) - 1;
		ll ans = 0;

		// iterate over 63 combinations
		for (ll i = 1; i <= subsets; i++)
		{
			ll denom = 1;
			ll setBits = __builtin_popcount(i);

			for (ll j = 0; j <= 7; j++)
			{
				if (i & (1 << j))
				{
					denom *= primes[j];
				}
			}

			if (setBits & 1)
				ans += no / denom;
			else
				ans -= no / denom;
		}

		cout << ans << endl;
		t--;
	}

}
