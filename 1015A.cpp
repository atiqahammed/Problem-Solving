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
	
	
	map<int, bool> inSegment;
	
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for(int j = x; j <= y; j++)
			inSegment[j] = true;
	}
	
	
	int count = 0;
	vector<int> outOfSegment;
	
	for(int i = 1; i <= m; i++) 
		if(!inSegment[i]) {
			count++;
			outOfSegment.push_back(i);
		
		}
		
	cout << count << endl;
	for(int i = 0; i < outOfSegment.size(); i++) {
		cout << outOfSegment[i] << " ";
	}

	
	
    return 0;
}
