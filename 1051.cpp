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
		//	cout << "paini" << endl;
			
			int missingCount = 0;
			if(!gotDigit(s)) missingCount++;
			if(!gotLowercaseLetter(s)) missingCount++;
			if(!gotUppercaseLetter(s)) missingCount++;
			
			if(missingCount == 1) {
				//cout << missingCount << endl;
				int digitCount = 0;
				int uppreCaseLetterCount = 0;
				int lowerCaseLetterCount = 0;
				
				for(int i = 0; i < s.length(); i++) {
					if(s[i] <= 'z' && s[i] >= 'a') lowerCaseLetterCount++;
					if(s[i] <= 'Z' && s[i] >= 'A') uppreCaseLetterCount++;
					if(s[i] <= '9' && s[i] >= '0') digitCount++;
				}
				
				if(digitCount == 0 && lowerCaseLetterCount > 1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= 'z' && s[i] >= 'a') {
							s[i] = '0';
							break;
						}
					}
					
				}
				else if(digitCount== 0 && uppreCaseLetterCount >1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= 'Z' && s[i] >= 'A') {
							s[i] = '0';
							break;
						}
					}
				}
				
				else if(lowerCaseLetterCount == 0 && uppreCaseLetterCount > 1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= 'Z' && s[i] >= 'A') {
							s[i] = 'a';
							break;
						}
					}
				}
				
				else if(lowerCaseLetterCount == 0 && digitCount > 1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= '9' && s[i] >= '0') {
							s[i] = 'a';
							break;
						}
					}
				}
				
				else if(uppreCaseLetterCount == 0 && digitCount  > 1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= '9' && s[i] >= '0') {
							s[i] = 'A';
							break;
						}
					}
				} 
				else if(uppreCaseLetterCount == 0 && lowerCaseLetterCount > 1) {
					for(int i = 0; i < s.length(); i++) {
						if(s[i] <= 'z' && s[i] >= 'a') {
							s[i] = 'A';
							break;
						}
					}
				}
				
				cout << s << endl;
				
			} 
			
			else {
				
				int digitCount = 0;
				int uppreCaseLetterCount = 0;
				int lowerCaseLetterCount = 0;
				
				for(int i = 0; i < s.length(); i++) {
					if(s[i] <= 'z' && s[i] >= 'a') lowerCaseLetterCount++;
					if(s[i] <= 'Z' && s[i] >= 'A') uppreCaseLetterCount++;
					if(s[i] <= '9' && s[i] >= '0') digitCount++;
				}
				
				if(lowerCaseLetterCount > 0) {
					s[0] = 'A';
					s[1] = '0';
				}
				
				else if(uppreCaseLetterCount > 0) {
					s[0] = 'a';
					s[1] = '0';
				}
				
				else if(digitCount > 0) {
					s[0] = 'A';
					s[1] = 'a';
				}
				
				cout << s << endl;
				
			}
			
			//cout << missingCount << endl;
		}
		
		
		
	}	
	
	
	
	

	
	
    return 0;
}
