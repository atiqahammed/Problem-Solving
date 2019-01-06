#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;





int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	
	ll n;
	cin >> n;
	
	ll a = 0, b = 0;
	int k = 0;
	
	while(1) {
		if(k%2) a++;
		else b++;
		
		if(a * b >= n) break;
		
		
		k++;
	}
	
	cout << a + b << endl;
	
	
	
    return 0;
}
