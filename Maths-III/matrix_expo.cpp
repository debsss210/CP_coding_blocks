#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
#define MOD 1000000000

ll k;
vector<ll> a, b, c;

//Multiplication of two matrix
//A --> k*K
//b --> k*k
//return C = A*B --> k*k
vector<vector<ll>> mul(vector<vector<ll>> A, vector<vector<ll>> B)
{
    vector<vector<ll>> C(k + 1, vector<ll>(k + 1));
    // logic to multiply matrices 
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= k; x++)
                C[i][j] = (C[i][j] + A[i][x] * B[x][j]) % MOD;
        }
    }
    return C;
}

//Finding T^n-1 using matrix exponentiation
vector<vector<ll>> pow(vector<vector<ll>> A, ll p)
{
    if (p == 1)
        return A;
    // if power is odd
    if (p & 1)
        return mul(A, pow(A, p - 1));

    vector<vector<ll>> X = pow(A, p / 2);

    return mul(X, X);
}

ll fib(ll n)
{

    //Base Case
    if (n == 0)
        return 0;

    //If n is less than k,
    //our answer lies in already created F1 vector
    if (n <= k)
        return b[n - 1];

    //Step 2. Determine the F1 vector
    vector<ll> F1(k + 1);

    // indexing from 1
    for (int i = 1; i < k + 1; i++)
        F1[i] = b[i - 1];

    //create transformation matrix T
    vector<vector<ll>> T(k + 1, vector<ll>(k + 1));

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i < k)
            {
                //Put 1 in all (i,j+1) positions
                if (j == i + 1)
                    T[i][j] = 1;
                else
                    T[i][j] = 0;
                continue;
            }
            //if i == k i.e. last row
            //For last row, put the coefficient vector
            T[i][j] = c[k - j];
        }
    }

    //Use matrix exponentiation to find T^n-1
    T = pow(T, n - 1);

    //answer is the first row of T^n-1 * F1
    ll res = 0;
    for (int i = 1; i <= k; i++)
    {
        res = (res + T[1][i] * F1[i]) % MOD;
    }
    return res % MOD;
}

int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll t, n, num;
    cin >> t;
    while (t--)
    {
        cin >> k;

        for (int i = 0; i < k; i++)
        {
            cin >> num;
            b.push_back(num);
        }

        for (int i = 0; i < k; i++)
        {
            cin >> num;
            c.push_back(num);
        }

        // the value of n
        cin >> n;
        printf("%lld\n", fib(n));

        b.clear();
        c.clear();
    }
    return 0;
}