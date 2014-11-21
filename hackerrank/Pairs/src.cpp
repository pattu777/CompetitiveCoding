#include<iostream>
#include<vector>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(void)
{
	string line;
	long long int size,diff;
	getline(cin,line);
	vector<long long int> vec;

	string delimiters = " ";
	size_t current;
	size_t next = -1;
	do
	{
		current = next + 1;
		next = line.find_first_of( delimiters, current );
		vec.push_back(atol((line.substr( current, next - current )).c_str()));
	}while (next != string::npos);
	size = vec[0];
	diff = vec[1];
	vec.clear();

	getline(cin,line);
	next = -1;
	do
	{
		current = next + 1;
		next = line.find_first_of( delimiters, current );
		vec.push_back(atol((line.substr( current, next - current )).c_str()));
	}while (next != string::npos);

	sort(vec.begin(),vec.end());
	long long int count = 0;
	long long int max = vec[vec.size()-1];
	for(long long int i=0;i<max;i++)
	{
		long long int x = vec[i]+diff;
		if(binary_search(vec.begin()+i,vec.end(),x))
		{
			cout << vec[i] << " " << x << endl;
			count++;
			max = x;
		}
	}
	//cout << count << endl;
	return 0;
}
    
