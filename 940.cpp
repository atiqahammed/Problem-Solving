#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int n, k, uniqueChar = 0;
	string s;
	cin >> n >> k >> s;
	map <char, bool> isExist, taken;

	for (int i = 0; i < n; i++) isExist[s[i]] = true;
	for (char ch = 'a'; ch <= 'z'; ch++) if(isExist[ch]) uniqueChar++;
	for (int i= 0; i < k; i++)
		for (char ch = 'z'; ch >= 'a'; ch--)
			if (isExist[ch]) {
				if (!taken[ch]) {
					cout << ch;
					taken[ch] = true;
					if(uniqueChar > 0) uniqueChar--;
					break;
				}
				else if(taken[ch] && uniqueChar <= 0) cout << ch;
			}
	cout << endl;

	return 0;
}