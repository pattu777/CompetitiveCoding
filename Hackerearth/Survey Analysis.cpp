#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(void)
{
	string str;
	vector<int> vec;
	int max = 0;
	for(int i=1;i<=7;i++)
	{
		cin >> str;
		int sum = 0;
		for(int i=0;i<str.length();i++)
			sum += atoi(str[i].c_str());
		float dev = (sum / str.length());
		float stand_dev = 0;
		for(int i=0;i<str.length();i++)
			stand_dev += pow(atoi(str[i].c_str())-dev,2);
		stand_dev /= str.length();
		stand_dev = sqrt(stand_dev);
	}
	return 0;
}
