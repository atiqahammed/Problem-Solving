#include <bits/stdc++.h>

//#define test cout<<"test"<<endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;





int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	char ch[1010][1010];
	
	int x1[7] = {0, 0, 1, 1, 2, 2, 2};
	int y1[7] = {1, 2, 0, 2, 0, 1, 2};
	
	int x2[7] = {0, 0, 1, 1, 2, 2, 2};
	int y2[7] = {-1, 1, -1, 1, -1, 0, 1};
	
	int x3[7] = {-1, -1, -1, 0, 1, 1, 1};
	int y3[7] = {0, 1, 2, 2, 0, 1, 2};
	
	
	bool flag[1010][1010];
	
	for(int i = 0; i < 1010; i++) 
		for(int j = 0; j < 1010; j++) {
			ch[i][j] = '.';
			flag[i][j] = false;
		}
			
			
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> ch[i][j];
		}
		//cout << endl;
	}
	
	//cout << n << " : " << m << endl;
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			//cout << ch[i][j];
			//cout << i << "=" << j << endl;
			bool test = false;
			bool t1 = true, t2 = true, t3 = true;
			
			
		//	if(i == 3) cout << "test" << endl;
			
			if(ch[i][j] == '#' && flag[i][j] == false) {
				int cx = i, cy = j;
				
				for(int k = 0; k < 7; k++) {
					int tempx = cx + x1[k];
					int tempy = cy + y1[k];
					
					
					if(ch[tempx][tempy] != '#') {
						t1 = false;
						break;
					}
					
				}
				
				if(t1) {
					flag[i][j] = true;
					for(int k = 0; k < 7; k++) {
						int tempx = cx + x1[k];
						int tempy = cy + y1[k];
						
						flag[tempx][tempy] = true;
					}
					
				} else {
					
					for(int k = 0; k < 7; k++) {
						int tempx = cx + x2[k];
						int tempy = cy + y2[k];
						
						/*
						if(i == 1 && j == 1) {
							//cout << "help" << endl;
							//cout << tempx  << "   /// " << tempy << endl;
						}
						*/
						
					
						if(ch[tempx][tempy] != '#') {
							//cout << "ll" << endl;
							//cout << tempx << "  .. " << tempy << endl;
							//cout << cx << " " << cy << endl;
							t2 = false;
							break;
						}
					
					}
					
					if(t2) {
						flag[i][j] = true;
						for(int k = 0; k < 7; k++) {
							int tempx = cx + x2[k];
							int tempy = cy + y2[k];
						
							flag[tempx][tempy] = true;
						}
					} else {
						for(int k = 0; k < 7; k++) {
							int tempx = cx + x3[k];
							int tempy = cy + y3[k];
					
					
							if(ch[tempx][tempy] != '#') {
								t3 = false;
								break;
							}
					
						}	
					
						if(t3) {
							flag[i][j] = true;
							for(int k = 0; k < 7; k++) {
								int tempx = cx + x3[k];
								int tempy = cy + y3[k];
						
								flag[tempx][tempy] = true;
							}
						}
						
					}
					
					
					
					
				}
				
			}
			
			if(!(t1 || t2 || t3)) {
				//cout << i << " " << j << endl;
				
				cout << "NO" << endl;
				return 0;
			}
			
		}
	}
	
	
	cout << "YES" << endl;
	
	/*for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << ch[i][j];
		}
		cout << endl;
	}*/
	
	
	

	
	
    return 0;
}
