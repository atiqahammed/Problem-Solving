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
	
	
	string s;
	cin >> s;
	
	int len = s.length();
	
	/*while(1) {
		bool flag = true;
		
		for(int i = 1; i < s.length(); i++) {
			
			if(s[i]+1 == s[i - 1]) {
				flag = false;
				swap(s[i], s[i-1]);
				//break;
			}
			
		}
		
		if(flag) break;
	}*/
	
	string one = "", zero = "", two = "";
	bool flag;
	for(int i = 0; i < len; i++) {
		if(s[i] == '1') one += s[i];
		else if(s[i] == '2') {
			two += s[i];
			flag = true;
		}
		
		else if(s[i] == '0' && flag) two+=s[i];
		else zero += s[i];
	}
	
	//cout << "one " << one << endl;
	//cout << "zero " << zero << endl;
	
	cout << zero << one << two << endl;
	//cout << s << endl;
	

	
	
    return 0;
}
