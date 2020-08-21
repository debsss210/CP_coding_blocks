#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count = 0, max = 0;
	for (int i = 0; i < s.size() - 1; ++i)
	{
		if (s[i + 1] == s[i]) {
			count++;
		}
		else {
			count = 0;
			continue;
		}
		if (max < count) {
			max = count;
		}
	}
	cout << max + 1 << endl;
	return 0;
}