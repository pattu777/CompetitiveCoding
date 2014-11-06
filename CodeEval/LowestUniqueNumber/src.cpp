#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<string>

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
			vector<int> vec;
			string delimiters = " ";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);	
		
			vector<int> arr;
			arr.assign(10,0);
			for(int i=0;i<vec.size();i++)
				arr[vec[i]] += 1;
			int i=0;
			for(;i<arr.size();i++)
			{
				if(arr[i] == 1)
					break;
			}
			for(int j=0;j<vec.size();i++)
			{
				if(vec[j] == i)
					cout << j+1 << endl;
			}
		}
	}
	infile.close();
	return 0;
}
		

			
