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
	
	ll a, b, c;
	string s;
	cin >> a >> b >> c >> s;
	
	
	for(int i = 0; i < s.length(); i++) 
		if(s[i] == '1')
			s[i] = ' ';
			
	stringstream iss(s); // Used for breaking words
    string word; // to store individual words
 
    int count = 0;
    while (iss >> word)
        count++;	
        
        if(count == 0) {
        	cout << 0 << endl;
        	return 0;
		}
	
	cout << min(count * c, (count - 1)*b+c) << endl;

	
	
    return 0;
}
