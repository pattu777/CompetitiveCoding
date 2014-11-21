#include <iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int test_cases;
	cin >> test_cases;
	for(int i=0;i<test_cases;i++)
	{
		int no_of_fount;
		cin >> no_of_fount;
		vector<int> vec;
		string line;
		getline(cin,line);
		string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = line.find_first_of( delimiters, current );
			vec.push_back(atoi((line.substr( current, next - current )).c_str()));
		}while (next != string::npos);	
		sort(vec.begin(),vec.end());
		
		for(int i=0;i<no_of_fount;i++)
			cout << vec[i] << " ";
		cout << endl;
		/*int num;
		for(int j=1;;j++)
		{
			num = vec[no_of_fount-1]*j;
			bool res = 1;
			for(int k=0;k<no_of_fount-1;k++)
			{
				if((num % vec[k]) == 0)
					res = 0;
			}
			if(res)
			{
				cout << num%1000000007 << endl;
				break;
			}
		}*/
	}
	return 0;
}

