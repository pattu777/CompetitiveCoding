#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> vec;
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1,x;i<=n;i++)
	{
		cin >> x;
		vec.push_back(x);
		int k;
		if( (i%2) == 0 )
			k = i/2;
		else
			k = (i+1)/2;
		sum += vec[k-1];
	}
	cout << sum << endl;
	return 0;
}
	
