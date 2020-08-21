/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example

Input:
AAAACACBA

Output:
AACABACAA
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int len = n.length();
    string a[len];
    int forward = 0, last = len - 1;
    for (int i = 0; (i < len) && forward <= last; i++)
    {
        
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i];
    }

    return 0;
}