#include <iostream>

using namespace std;

int result(int n, int k, int A, int B, int total) {
	if (n == 1) return 0;
	int res1, res2;
	res2 = result(n - 1, k, A, B, total + A);
	if(k > 1) {
		res1 = result(n / k, k, A, B, total + B);
		return total + min(res1, res2);
	}
	return total + res2;

}

int main(void) {
	int n, k, A, B;
	cin >> n >> k >> A >> B;
	cout << result(n, k, A, B, 0) << endl;


	return 0;
}