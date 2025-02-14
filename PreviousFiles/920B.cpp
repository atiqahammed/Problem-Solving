#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;


struct people {
	int start;
	int end;
};


bool acompare(people lhs, people rhs) { return lhs.start < rhs.start; }

int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	cin >> n;
	
	
	
	for(int i = 0; i < n; i++) {
		int k; 
		cin >> k;
		
		//cout << k << endl;
		
		people myPeople[k];
		
		for(int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			
			people temp;
			temp.start = x;
			temp.end = y;
			
			
			
			myPeople[j] = temp;
			
		}
		
		sort(myPeople, myPeople+k, acompare);
		
		/*
		
		for(int i = 0; i < k; i++) {
			cout << myPeople[i].start << " ";
		}
		
		*/
		int currentTime = 1;
		
		for(int j = 0; j < k; j++) {
			
			//cout << myPeople[i].start << " " << myPeople[i].end << endl;
			//test
			
			if(myPeople[j].end >= currentTime) {
				
				cout << max(currentTime, myPeople[j].start)  << " ";
				
				if(currentTime >= myPeople[j].start)
					currentTime = currentTime + 1;
				else 
					currentTime = myPeople[j].start + 1;
			}
			else {
			 	cout << 0 << " ";
			}
			
			//test 
		//	cout << currentTime << " vt" << endl;
		//	 
		}
		
		cout << endl;
		
		
		
		
		
		
		
	}

	
	
    return 0;
}
