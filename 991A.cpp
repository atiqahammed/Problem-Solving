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
  	
  	int a, b, c, d;
  	
  	cin >> a >> b >> c >> d;
  	
  	int x1 = a - c;
  	int x2 = b - c;
  	int k = d - c - x1 - x2;
  	
  	if(x1 < 0 || x2 < 0 || k <= 0) cout << -1 << endl;
  	else cout << k << endl;
	
	
	

	
	
    return 0;
}
