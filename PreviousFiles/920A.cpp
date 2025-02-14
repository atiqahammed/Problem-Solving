#include <iostream>
#include <algorithm>

using namespace std;

void input(int &n, int &k, int *bed) {
	cin >> n >> k;
	for(int i = 0; i < k; i++)
		cin >> bed[i];
}

int output(int n, int k, int *bed) {
	sort(bed, bed + k);
	int ans = bed[0];
	for(int i = 1; i < k - 1; i++)
		ans = max(ans, ((bed[i + 1] - bed[i]) / 2) + 1);
	ans = max(ans, n - bed[k - 1]) + 1;
	return ans;
}

int main(void) {
	int testCase, n, k, bed[200];
	cin >> testCase;

	while(testCase--) {
		input(n, k, bed);
		cout << output(n, k, bed) << endl;
	}

	return 0;
}