#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
    #endif

    long long n;
    cin>> n;

    long long ans =pow(2, n);
    cout<<ans<<endl;
}