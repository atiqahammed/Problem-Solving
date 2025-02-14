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
	
	cout << 1;
	
	if((n-1-1)%3) cout << " " << 1 << " " << n - 2 << endl;
	else cout << " " << 2 << " " << n - 3 << endl;
	
	

	
	
    return 0;
}
