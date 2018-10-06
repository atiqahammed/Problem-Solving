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
	
	
	int n, k, count = 0;
	cin >> n >> k;
	int rem = 0;
	
	
	for(int i = 0; i < n; i++) {
		count++;
		int x ;
		cin >> x;
		rem += x;
		
		
		if(rem > 8){
			k -= 8;
			rem -= 8;
		
		} 
		else  {
			k -= rem;
			rem = 0;
		}
		
		if(k <= 0) break;
	}
	
	if(k > 0) cout << "-1" << endl;
	else cout << count << endl;
	

	
	
    return 0;
}
