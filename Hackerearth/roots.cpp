#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,count = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if( (pow(b,2)-(4*a*c)) >= 0 )
			count++;
	}
	cout << count << endl;
	return 0;
}
