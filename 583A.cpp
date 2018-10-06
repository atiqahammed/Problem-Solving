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
	cin >> n;
	vector<int> vec;	
	map<int, bool> mx, my;
	
	for(int i = 1; i <= n*n; i++) {
			
		int x, y;
		cin >> x >> y;
		 //cout << x <<  "f" << y<<endl;
		
		if(!mx[x] && !my[y]) {
			vec.push_back(i);
			mx[x] = true; 
			my[y] = true;
			
			
			//cout << "text" << endl;
		}
		
	}	
	
	sort(vec.begin(), vec.end());
	//cout << vec.size() << endl;
	for(int i = 0; i < vec.size(); i++)
		cout << vec[i] <<  ' '; 
	
	cout << endl;
	

	
	
    return 0;
}
