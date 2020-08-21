/*
Mike found an interesting problem. In this problem you are given two integers, n and k. You need to find the the maximum value of x, such that, n! % kx = 0.

Input Format
First line contains number of test cases, T. Each test case contains two integers each, n and k.

Constraints
1<=T<=20 1<=n<=10^8 2<=k<=10^8

Output Format
Print the value of x for each test case.

Sample Input
2
5 2
1000 2
Sample Output
3
994
Explanation
In the first test case, n = 5 and k = 2. So, n! = 120. n! % 2^0 = 0, n! % 2^1 = 0, n! % 2^2 = 0, n! % 2^3 = 0, n! % 2^4 = 8, n! % 2^5 = 24, n! % 2^6 = 56, n! % 2^7 = 120. So, the answer should be 3.
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void mod_fact(ll n, ll k)
{
    int i = 0, result = 1;
    while (true)
    {
        for (int j = 1; j <= n; j++)
        {
            result *= (i % pow(k, i));
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        mod_fact(n, k);
    }

    return 0;
}