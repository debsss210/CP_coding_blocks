/*
You are given with an array  of size .An element  is said to be charged if its value() is greater than or equal to .  is the total number of subsets of array , that consist of element . 
Total charge value of the array is defined as summation of aint charged elements present in the array mod .
Your task is to output the total charge value of the given array .

INPUT FORMAT:

The first line of input contains number of test cases .
The first line of each test case consists of , the size of the array.
Next line contains  space-separated integers corresponding to each element .

OUTPUT FORMAT:

For each test case, output a single number corresponding to total charge value of the given array.


SAMPLE INPUT 
2
3
3 4 5
2
1 6
SAMPLE OUTPUT 
9
6

Explanation

CASE 1:
Possible subsets are: {3}, {4}, {5}, {3,4}, {3,5}, {4,5}, {3,4,5}, {}.
Element 3 is present in 4 subsets. As 3<4, it is not charged.
Element 4 is present in 4 subsets. As 4>=4, it is charged.
Element 5 is present in 4 subsets. As 5>=4, it is charged.
Total charge=4+5=9

CASE 2:
Possible subsets are: {1}, {6}, {1,6}, {}.
Element 1 is present in 2 subsets. As 1<2, it is not charged.
Element 6 is present in 2 subsets. As 6>=2, it is charged.
Total charge=6
*/

#include <bits/stdc++.h>
#define ll long long
const unsigned int M = 1000000007;
using namespace std;

int expo_pow(int x)
{
    if (x == 1)
        return 2;
    int half_pow = expo_pow(x / 2) % M;
    if (x & 1)
        return 2 * half_pow * half_pow;
    else
        return half_pow * half_pow;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll A[n];

        // as one element is only present in half of full subset
        int susets_half = expo_pow(n - 1) % M;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            if ((A[i]%M) >= susets_half)
                sum += (A[i] % (M));
        }
        cout << sum % M << endl;
    }

    return 0;
}
