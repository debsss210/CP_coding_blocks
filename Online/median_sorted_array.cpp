#include <bits/stdc++.h>
using namespace std;
#define ll long long

// We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.

// Input Format
// First line contains the input n. Second and Third line contains n space separated integers.

// Constraints
// N < 1000

// Output Format
// Print the median in a single line.

// Sample Input
// 5
// 1 3 5 7 9
// 2 4 6 8 10
// Sample Output
// 5
// Explanation
// Merged Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10] So the median element is 5

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin>>n;
    ll a[n], b[n], c[2*n];

    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int min=0;

    ll j=0, l=0, r=0;

    while (l<n && r<n)
    {
        if (a[l]<=b[r]) {
            c[j] = a[l];
            l++;
        }
        else {
            c[j] = b[r];
            r++;
        }
        j++;
    }

    while (l<n) {
        c[j] = a[l];
        l++;
        j++;
    }
    while (r<n) {
        c[j] = a[r];
        r++;
        j++;
    }

    cout<<c[n-1]<<endl;

    return 0;
}