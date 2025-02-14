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
	
	
	
	
	int m;
	cin >> n >> m;
	
	double temp = 1000000000; 
	double y, z;
	
	for(int i = 0; i < n; i++) {
		
		double a, b;
		cin >> a >> b;
		double t = a / b;
		if(t < temp) {
			temp = t;
			y = a;
			z = b;
		}
	}
	
	//cout << (y * m) / z << endl;
	printf("%.8lf\n", (y * m) / z);
	

	
	
    return 0;
}
