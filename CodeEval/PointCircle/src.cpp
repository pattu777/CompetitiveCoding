#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>

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
			string delimiters = ",:)(,;";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(line.substr( current, next - current ));
			}while (next != string::npos);	
			
			for(int i=0;i<vec.size();i++)
				cout << vec[i] << " ";
			cout << endl;	
		}
	}
	infile.close();
	return 0;
}

