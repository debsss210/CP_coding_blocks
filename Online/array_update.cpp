#include <iostream>
#include <algorithm> 
#include<iterator>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count=0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int *smallest = min_element(arr, arr + n);
        while (*smallest < k)
        {
            *smallest += 1;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}