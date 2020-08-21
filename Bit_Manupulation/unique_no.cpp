#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
#endif

    // Problem - Unique Number 2N+1
    // Given a list of numbers where every numbers occur twice except one, find it

    int n;
    cin >> n;

    int no;
    int ans = 0;
    // Bitwise XOR operator
    // Helped to not use any storage
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        ans = ans ^ no;
    }
    cout << ans << endl;
    return 0;
}