#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;

string strArr[8];

bool test1(string s) {
	
	for(int i = 0; i < 8; i++)
		if(s[i] != 'B') return false;
	
	return true;
}

bool test2(int x) {
	
	for(int i = 0; i < 8; i++)
		//if(strArr[i][x] != 'B') return false;
		cout << strArr[i] << endl;
		
	test
	return true;
}


int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	string strArr[8];
	
	for(int i = 0; i < 8; i++) {
		cin >> strArr[i];
	}
	
	int count = 0;
	
	for(int i = 0; i < 8; i++) {
		if(test1(strArr[i])) count++;
	}
	
	//cout << count << endl;
	
	for(int i = 0; i < 8; i++) {
		//if(test2(i)) count++;
		bool testing = true;
		for(int j = 0; j < 8; j++) {
			if(strArr[j][i] != 'B') {
				testing = false;
				break;
			}
		}
		if(testing) count++;
	
		//cout << strArr[i] << endl;
	}
	
	if(count == 16) count /= 2;

	cout << count << endl;
	
    return 0;
}
