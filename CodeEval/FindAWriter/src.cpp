#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc,char* argv[])
{
	ifstream infile;
	string line;

	infile.open(argv[1]);
	while(getline(infile,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			vector<string> vec;
			vector<int> arr;
			
			string delimiters = "|";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(line.substr( current, next - current ));
			}while (next != string::npos);

			string str = vec[0];
			string s = vec[1];
			delimiters = " ";
			next = -1;
			do
			{
				current = next + 1;
				next = s.find_first_of( delimiters, current );
				arr.push_back(atoi((s.substr( current, next - current )).c_str()));
			}while (next != string::npos);

			cout << str[arr[0]-1];
			for(int i=1;i<arr.size();i++)
			{
				if( isupper(str[arr[i]]) || ( isalpha(str[arr[i]-1]) && isdigit(str[arr[i]]) ) )
					cout << " ";
				cout << str[arr[i]-1];
			}
			cout << endl;
		}
	}
	infile.close();
	return 0;
}

					
						
