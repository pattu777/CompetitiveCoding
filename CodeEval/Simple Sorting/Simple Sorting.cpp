#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream file;
	string line;
	
	file.open(argv[1]);
	while(getline(file,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			vector<float> vec;
			string delimiters = " ";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atof((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);

			sort(vec.begin(),vec.end());
			for(int i=0;i<vec.size();i++)
				cout << vec[i] << " ";
			cout << endl;
		}
	}
	file.close();
	return 0;
}
