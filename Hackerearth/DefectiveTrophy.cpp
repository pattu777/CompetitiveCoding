#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int max_tries(int x)
{
	if(x == 2)
		return 1;
	else
		return (1 + max_tries(x-2));
}

int main()
{
	int test_cases;
	cin >> test_cases;
	for(int i=0;i<test_cases;i++)
	{
		int x,count = 0;
		cin >> x;
		count = max_tries(x);
		cout << count << endl;
	}
	return 0;
}
