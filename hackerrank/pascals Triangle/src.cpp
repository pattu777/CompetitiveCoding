#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int NCR(int a,int b)
{
	int result=1;
	for(int i=1;i<=min(a,a-b);i++)
   	{
		result *= a-i+1;
   		result /= i;
	}
	return result;
}

int main(void)
{
	vector<int> vec;
	for(int i=1;i<=31;i++)
	{
		for(int j=0,x;j<i;j++)
		{
			x=NCR(i-1,j);
			vec.push_back(x);
		}
		for(int j=0;j<vec.size();j++)
			cout << vec[j] << " ";
		cout << endl;
		vec.clear();
	}
	return 0;
}
