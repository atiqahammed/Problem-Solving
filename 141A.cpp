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
	
	string a, b, c;
	cin >> a >> b >> c;
	
	map<char, int> mp1, mp2;
	
	
	for(int i=0; i <a.length(); i++)
		mp1[a[i]]++;
	
	
	for(int i=0; i <b.length(); i++)
		mp1[b[i]]++;
		
	for(int i=0; i <c.length(); i++)
		mp2[c[i]]++;
	
	
	
	for(char i = 'A'; i <= 'Z'; i++)
		if(mp1[i] != mp2[i]) {
			cout << "NO" << endl;
			return 0;
		}
	
	cout << "YES" << endl;
	
    return 0;
}
