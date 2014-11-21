#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int reverse(int x)
{
	int rev = 0;
	vector<int> vec;
	while(x!=0)
	{
		vec.push_back(x%10);
		x /= 10;
	}
	for(int i=0,j=vec.size()-1;i<vec.size();i++,j--)
		rev += (vec[i]*pow(10,j));
	return rev;
}

int main(void)
{
	int testcases;
	cin >> testcases;
	for(int i=0,a,b;i<testcases;i++)
	{
		cin >> a;
		cin >> b;
		cout << reverse( reverse(a) + reverse(b) ) << endl;
	}
	return 0;
}
	
