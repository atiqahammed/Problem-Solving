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
	int arr[n];
	map<int, int> countOfASingleInt;
	
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		countOfASingleInt[arr[i]]++;
	}
	
	
	
	int a = 0, b = 0;
	map<int, string> set;
	map<int, bool> shouldTake;
	
	for(int i = 0; i <= 100; i++) {
		if(countOfASingleInt[i] == 1) {
			if(a<=b) {
				a++;
				set[i] = "a";
			}
			else {
				b++;
				set[i] = "b";
			}
		}
		
		else if(countOfASingleInt[i] == 2) {
			a++;
			b++;
			shouldTake[i] = true;
		}
	}
		
	
	if(a == b) {
		cout << "YES" << endl;
		
		for(int i = 0; i < n; i++) {
			if(countOfASingleInt[arr[i]] == 1) {
				if(set[arr[i]] == "a") cout << "A";
				else cout << "B";
			}
			
			else if(countOfASingleInt[arr[i]] == 2) {
				if(shouldTake[arr[i]]) {
					cout << "A";
					shouldTake[arr[i]] = false;
				} 
				
				else {
					cout << "B";
				}
			}
			
			else {
				cout << "A" ;
			}
		}
	}
	
	else {
		cout << "NO";
	}
	cout << endl;
	

	
	
    return 0;
}
