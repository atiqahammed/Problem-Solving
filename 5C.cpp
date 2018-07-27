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
	
	int pre = 0;
	
	for(int i = 0; i < len; i++) {
		if(s[i] == '(') pre++;
		else if(pre <= 0 && s[i] == ')') s[i] = ' ';
		else if(s[i] == ')' && pre > 0) pre--;
	}
	
//	cout << s << endl;
	
	
	int post = 0;
	for(int i = len; i >= 0; i--) {
		if(s[i] == ')') post++;
		else if(post <= 0 && s[i] == '(') s[i] = ' ';
		else if(s[i] == '(' && post > 0) post--;
	}
	

//	cout << s << endl;
	
	stringstream iss(s); // Used for breaking words
    string word;
    vector<string> vec;
    
    while(iss >> word) {
    	vec.push_back(word);
	}
	
	if(vec.size() <= 0) {
		cout << "0 1" << endl;
		return 0;
	}
	
	int maxi = 0;
	for(int i = 0; i < vec.size(); i++) {
		int temp = vec[i].length();
		//cout << temp << endl; 
		//cout << vec[i] << endl;
		maxi = max(maxi, temp);
	}
	
	int count = 0;
	for(int i = 0; i < vec.size(); i++) {
		int temp = vec[i].length();
		if(temp == maxi) count++;
	}
	cout << maxi <<  ' ' << count << endl; 	
    return 0;
}
