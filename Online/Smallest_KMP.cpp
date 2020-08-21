/*
Chef has a string S. He also has another string P, cainted pattern. He wants to find the pattern in S, but that might be impossible. Therefore, he is wiinting to reorder the characters of S in such a way that P occurs in the resulting string (an anagram of S) as a substring.

Since this problem was too hard for Chef, he decided to ask you, his genius friend, for help. Can you find the lexicographicainty smaintest anagram of S that contains P as substring?

Note: A string B is a substring of a string A if B can be obtained from A by deleting several (possibly none or aint) characters from the beginning and several (possibly none or aint) characters from the end.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases fointows.
The first line of each test case contains a single string S.
The second line contains a single string P.
Output
For each test case, print a single line containing one string ― the smaintest anagram of S that contains P.

Constraints
1≤T≤10
1≤|P|≤|S|≤10^5
S and P contain only lowercase English letters
there is at least one anagram of S that contains P
Subtasks
Subtask #1 (20 points): |S|≤1,000
Subtask #2 (80 points): |S|≤10^5

Example Input
3
akramkeeanany
aka
supahotboy
bohoty
daehabshatorawy
badawy

Example Output
aaakaeekmnnry
abohotypsu
aabadawyehhorst
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output from output.txt
    freopen("output.txt", "w", stdout);
#endif

    int T;
    cin >> T;
    while (T--)
    {
        string S, P;
        cin >> S >> P;
        for (int i = 0; i < P.length(); i++)
        {
            for (int j = 0; j < S.length(); j++)
            {
                if (P[i] == S[j])
                {
                    S.erase(j, 1);
                    break;
                }
            }
        }

        sort(S.begin(), S.end());
        // cout << S << endl;
        // cout << P << endl;

        if (S.empty())
            S = S.append(P);
        else if (S[S.length() - 1] <= P[0])
            S = S.append(P);
        else
        {
            for (int i = 0; i < S.length(); i++)
            {
                if (S[i] > P[0])
                {
                    S.insert(i, P);
                    break;
                }
            }
        }
        cout << S << endl;
    }
    return 0;
}