#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

// Input Format
// Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

// Constraints
// Q,a,b are integers.

// Output Format
// Q lines, each containing an output for your query.

// Sample Input
// 2
// 1 1
// 10 15
// Sample Output
// 1
// 17

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin>>n;

    while (n--)
    {
        ll l, r, ans = 0;
        cin>>l>>r;
        for (int i = l; i <= r; i++)
        {
            ans += __builtin_popcount(i);
        }
        cout<<ans<<endl;
    }


}