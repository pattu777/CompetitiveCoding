#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool is_inverse(vector<int> vec)
{
	for(int i=0;i<vec.size();i++)
	{
		int x=vec[i];
		int y=vec[x-1];
		if(x != vec[y-1])
			return 0;
	}
	return 1;
}

int main(void)
{
	int test_cases;
	cin >> test_cases;
	vector<int> v;
	for(int i=0;i<test_cases;i++)
	{
		v.clear();
		int size;
		cin >> size;
		for(int i=0,x;i<size;i++)
		{
			cin >> x;
			v.push_back(x);
		}

		if(is_inverse(v))
			cout << "inverse" << endl;
		else
			cout << "not inverse" << endl;
	}
	return 0;
}
