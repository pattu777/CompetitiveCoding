#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>

using namespace std;

int main(void)
{
	int test_cases;
	cin >> test_cases;
	for(int i=0;i<test_cases;i++)
	{
		/*int price;
		cin >> price;
		int no_of_items;
		cin >> no_of_items;
		vector<int> vec;
		*/string line;
		getline(cin,line);
		
		/*string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = line.find_first_of( delimiters, current );
			vec.push_back(atoi((line.substr( current, next - current )).c_str()));
		}while (next != string::npos);

		for(int j=0;j<vec.size();j++)
		{
			for(int k=j+1;k<vec.size();k++)
			{
				if((vec[j]+vec[k])==price)
				{
					cout << j+1 << " " << k+1 << endl;
					vec.erase(vec.begin()+k);
					break;
				}
			}
		}*/
		/*for(int j=0;j<vec.size();j++)
			cout << vec[j] << " ";
		*/cout << line << endl;
	}
	return 0;
}

