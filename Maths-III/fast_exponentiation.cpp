#include <iostream>
using namespace std;

// O(log n)
// Fast exponentiation
int pow(int a, int n)
{
    if (n == 0)
        return 1;
    int subprob = pow(a, n / 2);
    if (n % 2 == 0) // if n is even
        return subprob * subprob;
    else // if n is odd
        return a * subprob * subprob;
}

int main()
{
    int a, n;
    cout << "Enter the number and it's power" << endl;
    cin >> a >> n;
    int ans = pow(a, n);
    cout<<ans<<endl;
    return 0;
}