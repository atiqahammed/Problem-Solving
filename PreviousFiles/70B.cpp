#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void input(int &n, string &s)
{
	cin >> n;
	getline(cin, s);
	getline(cin, s);
}

int validityTest(int n, string s)
{
	int count = 0;
	
	
	
	bool sentence = false;
	int start = 0;
	int previousEnd = 0;
	int len = s.length();
	
	for(int i = 1; i < len; i++)
	{
		
		if(s[i] == '.' || s[i] == '?' || s[i] == '!')
		{
			if(i == len - 1) 
			{
				if(i - start + 1 > n)
				{
					count++;
					if(i - previousEnd - 1 > n) return 0;
				}
				//cout << "test" << endl;
				count++;
				break;
			}
			
			if(i - start + 1 > n)
			{
					if(i - previousEnd - 1 > n) return 0;
					count++;
					start = previousEnd + 2;
						
			}
			previousEnd = i;
			
		}
		
	}
	
	return count;
	
	return false;
}

int main(void)
{
	//freopen("input.cpp", "r", stdin);
	int n;
	string str;
	input(n, str);
	int x = validityTest(n, str);
	
	if(x) cout << x << endl;
	else cout << "Impossible" << endl;
	//cout << ((x > 0) ? x : "Impossible") << endl;
	
	return 0;
}
