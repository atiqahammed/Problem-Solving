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
	
	
	ll a, b;
	cin >> a >> b;
	ll k, l;
	k = max(a, b);
	l = min(a, b);
	
	cout << "YES" << endl;
	
	for(ll i = l; i <= k; i+=2)
		cout << i << " " << i + 1<< endl;
		//printf("%lld\n", i);
	
	
	

	
	
    return 0;
}
