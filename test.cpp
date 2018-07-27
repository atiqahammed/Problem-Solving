#include<bits/stdc++.h>
using namespace std;

int main()
{
      ios::sync_with_stdio(false);
      map<string, int> mp;

      mp["a"]=500;
      mp["b"]=200;
      mp["d"]=300;
      mp["c"]=400;

      for(auto it=mp.begin(); it != mp.end(); it++)
      {
         cout<<it->first <<" : "<<it->second<<endl;
      }
      return 0;
}
