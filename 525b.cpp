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
	
	int len = s.length();
	
	int n;
	cin >> n;
	
	while (n--) {
		int temp;
		cin >> temp;
		//cout << temp << endl;
		
		int start = temp - 1;
		int end = len - temp + 1;
		
		//cout << start << " " << end << endl;
		
		int move = (end - start) / 2;
		//cout << move << endl;
		int index = start;
		
		while(move--) {
			char tch = s[index];
			s[index] = s[len - index - 1];
			s[len - index - 1] = tch;
			index++;
			//cout << s << endl;
		}
		
		//for(int i = start; i )
	}
	
	cout << s << endl;

	
	
    return 0;
}
