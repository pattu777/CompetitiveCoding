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

int main()
{
	int n;
	cin >> n;
	vector<int> vec;
	for(int i=0,x;i<n;i++)
	{
		cin >> x;
		for(int j=0,k;j<x;j++)
		{
			cin >> k;
			vec.push_back(k);
		}
	
		vector<int> arr;
		for(int i=0;i<vec.size();i++)
		{
			for(int j=i+1;j<vec.size();j++)
			{
				int sum = vec[i]+vec[j];
				arr.push_back(sum);
			}
		}
		sort(arr.begin(),arr.end());
		int diff = arr[arr.size()-1] - arr[0];
		for(int j =0;j<arr.size()-1;j++)
		{
			int s = arr[j+1] - arr[j];
			if(s < diff)
				diff = s;
		}
		//sort(diff.begin(),diff.end());
		//for(int j=0;j<diff.size();j++)
		//	cout << diff[j] << " ";
		cout << diff << endl;	
	}
	return 0;
}

