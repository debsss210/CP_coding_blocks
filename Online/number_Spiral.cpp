#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[5][5] ={ { 1, 2, 9, 10, 25 }, { 4, 3, 8, 11, 24 }, { 5, 6, 7, 12, 23 }, { 16, 15, 14, 13, 22 }, { 17, 18, 19, 20, 21 } };

    long long n;
    cin>>n;
    while (n--)
    {
        int y, x;
        cin>>y>>x;

        cout<<a[y-1][x-1]<<endl;
    }
    return 0;
}