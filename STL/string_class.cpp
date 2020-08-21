#include <iostream>
#include <string>
using namespace std;

int main()
{

    // find substring
    string s = "I want to have apple juice";
    int index = s.find("apple");
    cout << index << endl;

    // remove a word from the string
    string word = "apple";
    s.erase(index, word.length() + 1); // removes this much letters from the index
    cout << s << endl;

    // iterators
    string s2 = "Mango";
    for (auto it/*or string::iterator it*/= s2.begin(); it < s2.end(); it++) 
    {
        cout << *it << ":";
    }
    cout << endl;

    //for each loop
    for (auto c : s2)
    {
        cout << c << ",";
    }
    cout << endl;

    return 0;
}