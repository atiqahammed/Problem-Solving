#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;


/*
void intput(void)
{
    
}
/*
void output()
{
    
}*/

int main(void)
{
    //input();
    //output();
    
    int n;
    int temp, maxi = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        maxi = max(maxi, temp);
    }
    
    cout << ((maxi <= 25) ? 0 : maxi - 25) << endl;
    
	return 0;
}
