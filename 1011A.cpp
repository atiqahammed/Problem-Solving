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
	
	int k;
	cin >> n >> k;
	
	string j;
	cin >> j;
	
	//cout << j << endl;
//	cout << n << " k " << k << endl;
	
	map<char, bool> charCount, adjacunt;
	
	for(int i = 0; i < n; i++) {
		charCount[j[i]] = true;
	}
	
	//for(char i = 'a'; i <= 'z'; i++)
	//	cout << i << " " << charCount[i] << endl;
	
	int count = 0;
	int weight = 0;
	
	for(char i = 'a'; i <= 'z'; i++) {
		if(i != 'a' ) {
			if((!adjacunt[i - 1]) && charCount[i]) {
			//	cout << i << " " << endl;
				
				count++;
				weight += i - 'a' + 1;
				adjacunt[i] = true;
			}
		}  else if(charCount[i]){
		//	cout << i << " " << endl;
			count++;
			weight += i - 'a' + 1;
			adjacunt[i] = true;
		}
		//cout << weight << " l" << endl;
		if(count >= k) break;
			
	}
	
	if(count == k) cout << weight << endl;
	else cout << -1 << endl;
	
	
	
	
	

	
	
    return 0;
}
