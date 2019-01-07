#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


int getLowerMedian(int n) {
	if(n % 2) return n / 2;
	else return n / 2 - 1;
}

int arr[20];
int n;


bool fun(int total, int index, int taken) {
	if(index == n) {
		if(total % 360 == 0) return true;
		return false;
	}
	
	total += arr[index] * taken;
	index++;
	return (fun(total, index, 1) || fun(total, index, -1));
	
}

int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	} 

	int total = 0;
	
	if(fun(total, 0, 1) || fun(total, 0, -1)) {
		cout << "YES" << endl;
	}
		
	else cout << "NO" << endl;
    return 0;
}
