#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


//ll n;




bool isPalindrom(string s) {
	
	int l = s.length();
	
	for(int i=0;i < l ;i++)
        if(s[i] != s[l-i-1])
            return false;
   
	return true;
}





int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	//ll count = 0;
	
	
	
	int t;
	cin >> t;
	
	
	for(int tt = 0; tt < t; tt++) {
		
		cout << "Case " << tt+1 << ":"<< endl;
		
		int n, q;
		cin >> n >> q;
		map<int , bool> ok;
		
		
		vector<int> x, y;
		
		for(int i = 0; i < n; i++) {
			
			int t1, t2;
			cin >> t1 >> t2;
			
			x.push_back(t1);
			y.push_back(t2);
		
			
		
		
		}
		
		
		
		vector<int> xx, yy;
		
		for(int i = 0; i < n; i++) {
			for(int j = i; j < n; j++) {
				//cout << i << " " << j << endl;
				
				int x1 = x[i]+x[j] + y[i] + y[j];
				int y1 = x[i]+x[j] - y[i] - y[j];
				
				if(!ok[x1]) {
					xx.push_back(x1);
					yy.push_back(y1);
					ok[x1] = true;
				}
				
				
			}
		}
		
		/*
		for(int i = 0; i < xx.size(); i++) {
			cout << xx[i] << " " << yy[i] << endl;
		}*/
		
		
		
		
		
		for(int i = 0; i < q; i++) {
			int a1, b1, c1, d1;
			cin >> a1 >> b1 >> c1 >> d1;
			
			int minix = min(a1, c1);
			int maxix = max(a1, c1);
			
			int miniy = min(b1, d1);
			int maxiy = max(b1, d1);
			
			int count = 0;
			
			for(int j = 0; j < xx.size(); j++) {
				if(minix <= xx[j] && xx[j] <= maxix && yy[j] <= maxiy && miniy <= yy[j]) count++;
			}
			
			cout << count << endl;
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	

	
	
    return 0;
}
