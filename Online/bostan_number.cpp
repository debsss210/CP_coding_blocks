/*
A Boston number is a composite number, the sum of whose digits is the sum of the digits of its prime factors obtained as a result of prime factorization (excluding 1 ). The first few such numbers are 4,22 ,27 ,58 ,85 ,94 and 121 . For example, 378 = 2 × 3 × 3 × 3 × 7 is a Boston number since 3 + 7 + 8 = 2 + 3 + 3 + 3 + 7. Write a program to check whether a given integer is a Boston number.

Input Format
There will be only one line of input:N , the number which needs to be checked.

Constraints
1 < N < 2,147,483,647 (max value of an integer of the size of 4 bytes)

Output Format
1 if the number is a Boston number. 0 if the number is a not Boston number.

Sample Input
378
Sample Output
1
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll temp = n;
    int n_sqrt = sqrt(n), prime_ans = 0, num_ans = 0;

    //  for sum of prime factorization
    if (temp % 2 == 0)
    {
        while (temp % 2 == 0)
        {
            prime_ans += 2;
            temp /= 2;
        }
    }

    for (int i = 3; i <= n_sqrt; i += 2)
    {
        while (temp % i == 0)
        {
            int temp1 = i;
            while (temp1 != 0)
            {
                prime_ans += temp1 % 10;
                temp1 /= 10;
            }
            temp = temp / i;
        }
    }

    // checking the sum of number
    while (n != 0)
    {
        num_ans += n % 10;
        n = n / 10;
    }

    // for checking bostan number
    if (prime_ans == num_ans)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
