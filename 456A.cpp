#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;

struct Laptop {
	int price;
	int quality;
};


bool acompare(Laptop lhs, Laptop rhs) { return lhs.price < rhs.price; }

int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	
	int n;
	cin >> n;	
	
	Laptop lptp[n];
	
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		lptp[i].price = x;
		lptp[i].quality = y;
		if(x < y) {
			cout << "Happy Alex" << endl;
			return 0;		
		}
	}
	
	
	sort(lptp, lptp+n, acompare);
	
	for(int i= 0; i < n - 1; i++) {
		if(lptp[i].quality <= lptp[i+1].quality && lptp[i].price != lptp[i+1].price) {
			//cout << "Poor Alex" << endl;
			//return 0;
		}
	}

	cout << "Poor Alex" << endl;
	
	
    return 0;
}
