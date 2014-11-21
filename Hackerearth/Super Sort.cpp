#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	int test_cases;
	cin >> test_cases;
	vector<int> vec;
	for(int i=0,x;i<test_cases;i++)
	{
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
		cout << vec[i] << endl;
	return 0;
}
