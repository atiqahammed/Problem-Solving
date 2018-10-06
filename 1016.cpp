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
	
	ll n, m;
	
	
	cin >> n >> m;
	
	ll remaining = m;
	ll inHand = 0;
	
	for(int i = 0; i < n; i++) {
		ll temp, count = 0;
		cin >> temp;
		
	
		
	
	
		
		
		
		cout << (temp+inHand) / m << " ";// << endl;
		inHand = (temp+inHand) % m;
		
	}	
	
	cout << endl;
	
	
	

	
	
    return 0;
}
