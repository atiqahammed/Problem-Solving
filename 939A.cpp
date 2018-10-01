#include <iostream>
#include <map>

using namespace std;

int main(void) {
	int n, temp;
	cin >> n;
	map<int, int> loves;
	for(int i = 1; i <= n; i++)
	{
		cin >> temp;
		loves[i] = temp;
	}

	for(int i = 1; i <= n; i++)
	{
		if(i == loves[loves[loves[i]]])
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}