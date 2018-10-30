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
	
	
	int n;
	ll L, a;
	ll count = 0, start = 0;
	
	cin >> n >> L >> a;
	
	while(n--) {
		ll t, l;
		cin >> t >> l;
		count += (t - start) / a;
		start = l + t;
	}
	
	count += (L - start) / a;
	
	cout << count << endl;
		
	
	
	

	
	
    return 0;
}
