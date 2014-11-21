#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool is_prime(int x)
{
	if(x<2)
		return 0;
	for(int i=2;i<x;i++)
	{
		if((x%i)==0)
			return 0;
	}
	return 1;
}

int fibb(int a)
{
	if(a<2)
		return a;
	else
		return fibb(a-1)+fibb(a-2);
}

int main(void)
{
	vector<int> vec;
	vec.push_back(-1);
	for(int i=1,count = 0;(i<=100000)&&(count < 5);i++)
	{
		int x = fibb(i);
		if(is_prime(fibb(i)))
		{
			if(x!=vec.back())
			{
				count++;
				vec.push_back(x);
			}
		}
	}
	for(int i=1;i<vec.size();i++)
		cout << vec[i] << " ";
	cout << endl;
	return 0;
}
	
