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
	
	
	
	int t;
	cin >> t;
	
	for(int lll = 0; lll < t; lll++) {
		
		int n, q;
		cin >> n >> q;
		int a[n][2];
		for(int i= 0; i < n; i++) {
			cin >> a[i][0] >> a[i][1];
		}
		
		
		
		
		for(int i = 0; i < q; i++) {
			
			int ss, dd;
			cin >> ss >> dd;
			bool x = false, y , in = true, previousTurn;
			if(ss== dd) {
				cout << 0 << endl;
				break;
			}
			
			int count = 0
			
			int mini = min(ss, dd);
			int mzxi = max(ss, dd);
			
			
			for(int j = mini; j <= maxi; j++) {
				
				if(init) {
					
					if( a[j-1][0] != a[j % n][0]  && a[j-1][1] != a[j % n][1]  ) 	{
						
						init = false;
						count += 1;
						
						if(x) {
								y = true;
								x = false;
						}
						
						else if( y ) {
							x = true;
							y = false;
							
							
						} else {
							previousTurn = true;
						}
						
						
						
					}
					
					
					else if( a[j-1][0] == a[j % n][0]   ) {
						x = true;
						
					}
					
					else if (       a[j-1][1] == a[j % n][1]          ) {
						y = true;
						
						
					}
					
					
				
					
				} else {
					
					
					
					
					
				}
				
				
			}
			
		}
			
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	

	
	
    return 0;
}
