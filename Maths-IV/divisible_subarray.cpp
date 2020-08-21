#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n], pre[n + 1];
        memset(pre, 0, sizeof(pre));

        pre[0] = 1;
        // read the input
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sum %= n;
            sum = (sum + n) % n;
            pre[sum]++;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll m = pre[i];
            ans += m * (m - 1) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}