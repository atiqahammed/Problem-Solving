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
	
	
	string s;
	cin >> s;
	
	int lengthOfString = s.length();
	int totalChar = 0;
	
	for(int i = 0; i < lengthOfString; i++) {
		if(s[i] >= 'a' && s[i] <= 'z') totalChar++; 
	}
	
	int k;
	cin >> k;
	
	int missing = lengthOfString - totalChar;
	
	if (totalChar - missing <= k) {
		int l = 0;
		for(int i = 0; i < lengthOfString; i++) {
			if(s[i] >= 'a' && s[i] <= 'z') {
				cout << s[i];
				l++;
			}
			if(l == k) break;
		}
		cout << endl;
	}
	
	else cout << "Impossible" << endl;
	
	
	
    return 0;
}
