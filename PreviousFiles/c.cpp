#include <bits/stdc++.h>


#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;

struct XY{
  int x;
  int y;
};


int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif

    XY direction[4];// = {'l','u','r','d'};
    direction[0].x = 0;
    direction[0].y = -1;
    
    direction[1].x = -1;
    direction[1].y = 0;
    
    direction[2].x = 0;
    direction[2].y = 1;
    
    direction[3].x = 1;
    direction[3].y = 0;
    
    
    int count = 0;
    
    int n, m;
    cin >> n >> m;
    string s[n];
    
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    int sx, sy;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(s[i][j] == 'S') {
                sx = i;
                sy = j;
            }
        }
    }
    
    //cout << sx << " " << sy << endl;
    
    string move;
    cin >> move;
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
                for(int l = 0; l < 4; l++) {
                    if(i != j && i != k && i != l && j != k && j != l && k != l) {
                        
                       // count++;
                        
                        int cx = sx, cy = sy;
                        
                        
                        //cout << cx << " " << cy << endl;
                        //cout << i << j << k << l << endl;
                        for(int ii = 0; ii < move.length(); ii++) {
                            int INDEX = move[ii] - '0';
                            XY cDir;
                            if(i == INDEX) {
                            	cDir = direction[0];
							}
							
							else if(j == INDEX) {
								cDir = direction[1];
							}
							
							else if(k == INDEX) {
								cDir = direction[2];
							}
							
							else if(l == INDEX) {
								cDir = direction[3];
							}
                            
							//cout << INDEX;
							
							// = direction[move[ii] - '0'];
                            cx += cDir.x;
                            cy += cDir.y;
                            
                           // cout << cx << " " << cy << endl;
                            
                            if(cx < 0 || cy < 0 || cx >= n || cy >= m) {
                               //cout << "out" << endl;
                                break;
                            }
                            
                            if(s[cx][cy] == '#') {
                               // cout << "obs" << endl;
                                break;
                            }
                            
                            if(s[cx][cy] == 'E') {
                            	//cout << "paichi" << endl;
                                count++;
                                break;
                            }
                            
                            
                        }
                        
                        //cout << endl;
                        //cout << "------------------------------------" << endl;
                        
                        //cout << i << j << k << l << endl;
                    }
                }
            }
        }
    }
    
    
    cout << count << endl;
    
    
    
    return 0;
}
