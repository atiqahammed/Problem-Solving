#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define end cout << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;


int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	int k;
	cin >> n >> k;
	
	map<int, int> mp, index;
	
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		mp[temp]++;
		index[temp] = i+1;
	}
	
	int count  = 0;
	for(int i = 0; i < 1001; i++) {
		if(mp[i]> 0) count++;
	}
	if(count >= k) {
		cout << "YES" << endl;
		int x = 0;
		for(int i = 1; i < 10001; i++) {
			if(mp[i] > 0) {
				cout << index[i] << " " ;
				x++;
			}
			if(x == k) break;
		}
	} else {
		cout << "NO" << endl;
	}
	

	
	
    return 0;
}
