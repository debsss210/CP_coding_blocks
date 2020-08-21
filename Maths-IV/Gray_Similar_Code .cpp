#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 130)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    ll x = a[i] ^ a[j] ^ a[k];
                    if (binary_search(a + k + 1, a + n, x))
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
        cout << "No" << endl;
    }
    return 0;
}