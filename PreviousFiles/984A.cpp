#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


int getLowerMedian(int n) {
	if(n % 2) return n / 2;
	else return n / 2 - 1;
}


int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	sort(arr, arr+n);
	
	cout << arr[getLowerMedian(n)] << endl;
	
	
	
    return 0;
}
