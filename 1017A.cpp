#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;



int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	ll count = 0;
	
	int rank = 1;
	cin >> n;
	
	int total = 0;
	for(int i = 0; i <4; i++) {
		int temp;
		cin >> temp;
		total += temp;
	}
	
	for(int i = 0; i < n - 1; i++) {
		int count = 0;
		for(int j = 0; j < 4; j++) {
			int temp;
			cin >> temp;
			count += temp;
		}
		
		if(count > total) rank++;
	}
	
	cout << rank << endl;
	
	

	
	
    return 0;
}
