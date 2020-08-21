/*
Given a string, your task is to generate all different strings that can be created using its characters.

Input

The only input line has a string of length n. Each character is between a–z.

Output

First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.

Constraints
1≤n≤8
Example

Input:
aabac

Output:
20
aaabc
aaacb
aabac
aabca
aacab
aacba
abaac
abaca
abcaa
acaab
acaba
acbaa
baaac
baaca
bacaa
bcaaa
caaab
caaba
cabaa
cbaaa
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string task;
    cin>>task;
    int n = task.length();
    string alphabetical[n];
    char count[26];
    for (int i = 0; i < n; i++)
    {
        alphabetical[i] = task[i];
        
    }
    
    
    return 0;
}