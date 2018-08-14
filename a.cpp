#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


//ll n;



int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	//ll count = 0;
	
	
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int index = s.length();
	
	
	for(int i = 0; i < n; i++) {
		int type;
		cin >> type;
		
		//cout << i << endl;
		
		if(type == 1) {
			string xx;
			cin >> xx;
			
		//	cout << ">>> " << xx << endl;
			
			if(index == 0 && xx.length() > 1) continue;
			if(xx.length() > 1) {
			//	cout << "paichi" << endl;
				s.erase(index-1, 1);
				index--;
			} else {
				s.insert(index, xx);
				index++;
			}
			
		} else {
			int tt;
			cin >> tt;
			index = tt;
		
		}
		
	//	cout << s << endl;
		
	}
	
	cout << s << endl;
	
	
	
	

	
	
    return 0;
}
