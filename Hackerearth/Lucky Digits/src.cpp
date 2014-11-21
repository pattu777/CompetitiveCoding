#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;

bool is_lucky(int x,vector<int> v)
{
	vector<int> myv;
	while(x!=0)
	{
		myv.push_back(x%10);
		x /= 10;
	}
	unique(myv.begin(),myv.end());
	sort(myv.begin(),myv.end());
	sort(v.begin(),v.end());
	if(v == myv)
		return 1;
	else	
		return 0;
}

int main(void)
{
	int test_cases,i=0;
	cin >> test_cases;
	while(i<test_cases)
	{
		
		
		/*string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = str.find_first_of( delimiters, current );
			vec.push_back(atoi((str.substr( current, next - current )).c_str()));
		}while (next != string::npos);

		cin >> num;
		for(int j=2;;j++)
		{
			int x = num * j;
			if(is_lucky(num,vec))
			{
				cout << x << " = " << num << " * " << j << endl;
				break;
			}
		}*/
		string rawInput;
  		vector<string> v;
  		while( getline( cin, rawInput, ' ' ) )
  		{
    			v.push_back(rawInput);
  		}
		for(int j=0;j<v.size();j++)
			cout << v[j] << ",";
		//cout << str << endl;
		i++;
	}
	return 0;
}
