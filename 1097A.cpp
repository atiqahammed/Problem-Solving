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
	string s, a[5];
	
	cin >> s;
	
	
	
	for(int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < 5; i++) {
		if(s[0] == a[i][0] || s[1] == a[i][1]) {
			cout << "YES" << endl;
			return 0;	
		}
	}

	cout << "NO" << endl;
	/// comment
	
	
    return 0;
}
