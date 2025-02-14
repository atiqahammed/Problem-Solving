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
	
	
	int k;
	
	cin >> n >> k;
	map<int, int> count;
	
	for(int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		count[temp] ++;
	}


	for(int i = 1; i < 100; i++) 
	cout << i << " " << count[i] << endl;
	
	
    return 0;
}
