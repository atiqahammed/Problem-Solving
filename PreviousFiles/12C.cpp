#include <bits/stdc++.h>

#define test cout << "test" << endl;
#define myinarr int arr[n];

using namespace std;

typedef long long ll;


ll n;

class sort_map
{
  public:
	string key;
	int val;
};

bool Sort_by(const sort_map& a ,const sort_map& b)
{
	return a.val > b.val;
}




int cntBits(int value) {
    int num_bits=0;
    for(size_t i = 0; i < 32 ; ++i, value >>= 1) {
        if ((value & 1) == 1) ++num_bits;
    }
    return num_bits;
}

struct cntBitsCmp {
    bool operator()(int a, int b) {
        return cntBits(a) < cntBits(b);
    }
};



bool comp(int x , int y ){
    return  __builtin_popcount(x) <  __builtin_popcount(y);
}

int main(void) {
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  	#endif
	
	int k;
	cin >> n >> k;
	
	myinarr 
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	
	/*
	for(int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}*/
	
	/*
	bool(*fn_pt)(int,int) = comp;
    map<string, int, bool(*)(int,int) > fruitCount (fn_pt);
	*/
	
	map<string,int> fruitCount;
	map<string,int>::iterator it;
	vector< sort_map > v;
	vector< sort_map >::iterator itv;
	sort_map sm;
	
	for(int i = 0; i < k; i++) {
		string tempString;
		cin >> tempString;
		fruitCount[tempString]++;
	}
	
	for (it = fruitCount.begin(); it != fruitCount.end(); ++it)
	{
		sm.key = (*it).first; sm.val = (*it).second;
		v.push_back(sm);
	}
	
	/*
	for (itv = v.begin(); itv != v.end(); ++itv)
	{
		cout << (*itv).key << " : " << (*itv).val << endl;
	}*/
	
	sort(v.begin(),v.end(),Sort_by);
	
	//cout << "sorted" << endl;
	
	
	int mini = 0, maxi = 0, index = 0;
	for (itv = v.begin(); itv != v.end(); ++itv)
	{
		
		//cout << (*itv).key << 
		mini += arr[index] * (*itv).val;
		maxi += arr[n - index -1] * (*itv).val;
		index++;
		//cout << (*itv).key << " : " << (*itv).val << endl;
	}	
	
	cout << mini << " " << maxi << endl;
	
	
    return 0;
}
