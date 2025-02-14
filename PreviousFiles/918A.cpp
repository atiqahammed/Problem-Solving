#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(void)
{
	//freopen("input.cpp", "r", stdin);
	int arr[15] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987}, n;
	map<int, bool> fb;
	for(int i = 0; i < 15; i++) fb[arr[i]] = true;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cout << ((fb[i]) ? "O" : "o");
	cout << endl;
	
	return 0;
}
