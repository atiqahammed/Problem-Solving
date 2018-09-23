#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


bool gotLowercaseLetter(string s) {
	for(int i = 0; i < s.length(); i++) 
		if(s[i] <= 'z' && s[i] >= 'a') return true;
	return false;
}

bool gotUppercaseLetter(string s) {
	for(int i = 0; i < s.length(); i++) 
		if(s[i] <= 'Z' && s[i] >= 'A') return true;
	return false;
}

bool gotDigit(string s) {
	for(int i = 0; i < s.length(); i++) 
		if(s[i] <= '9' && s[i] >= '0') return true;
	return false;
}



bool allRequirementsFulled(string s) {
	return (gotDigit(s) && gotUppercaseLetter(s) && gotLowercaseLetter(s));
}



int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	int n;
	cin >> n; 
	
	
	for(int i = 0; i < n; i++) {
		
		string s;
		
		cin >> s;
		
		if(allRequirementsFulled(s)) {
			cout << s << endl;
		} 
		else {
			cout << "paini" << endl;
			
			int missingCount = 0;
			if(!gotDigit(s)) missingCount++;
			if(!gotLowercaseLetter(s)) missingCount++;
			if(!gotUppercaseLetter(s)) missingCount++;
			
			if(missingCount == 1) {
				cout << missingCount << endl;
				
			} 
			
			else {
				
			}
			
			//cout << missingCount << endl;
		}
		
		
		
	}	
	
	
	
	

	
	
    return 0;
}
