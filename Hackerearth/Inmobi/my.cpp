#include<iostream>
#include<fstream>
#include<ostream>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<list>
#include<map>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<cstdio>
#include<assert.h>
#include<pthread.h>
#include<bitset>
#include<ctime>
#include<cstdlib>

using namespace std;

int ancestor(vector<int> vec,vector<int> arr)
{
	

int main()
{
	int nodes;
	cin >> nodes;
	vector<int> vec;
	for(int i=0,x;i<nodes;i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	int m;
	cin >> m;
	vector<int> arr;
	for(int i=0,x;i<m;i++)
        {
                cin >> x;
                arr.push_back(x);
        }  
	cout << ancestor(vec,arr) << endl;
	return 0;
}











