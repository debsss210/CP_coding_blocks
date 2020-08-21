#include <bits/stdc++.h>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    // // for getting input from input.txt
    // freopen("input.txt", "r", stdin);
    // // for writing output from output.txt
    // freopen("output.txt", "w", stdout);
    // #endif

    int n;
    cin>>n;
    while (n--) {
        string s1, s2, ans;
        cin>>s1>>s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i]==s2[i])  ans.push_back('0');
            else  ans.push_back('1');
        }
        cout<<ans<<endl;
    }

}