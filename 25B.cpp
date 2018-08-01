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
	
	cin >> n;
	string s;
	cin >> s;
	
	int len = s.length();
	
	if(len % 2) {
		
		for(int i = 0; i < len - 3; i+=2) {
			cout << s[i] << s[i+1] << "-";
		}
		
		cout << s[len-3] << s[len-2] << s[len-3] << endl;
	} else {
		
		for(int i = 0; i < len - 2; i+=2) {
			cout << s[i] << s[i+1] << "-";
		}
		cout << s[len-2] << s[len-3] << endl;
	}
	

	
	
    return 0;
}
