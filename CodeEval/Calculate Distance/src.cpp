#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>

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
			vector<float> vec;
			vector<string> arr;
			string delimiters = "(), ";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				arr.push_back(line.substr( current, next - current ));
			}while (next != string::npos);

			/*for(int i=0;i<arr.size();i++)
			{
				string str = arr[i];
				delimiters = "(),";
				next = -1;
				do
				{
					current = next + 1;
					next = str.find_first_of( delimiters, current );
					vec.push_back(atof((str.substr( current, next - current )).c_str()));
				}while (next != string::npos);
			}
			//float dist = sqrt(pow(vec[3]-vec[1],2) + pow(vec[2]-vec[0],2));*/
			for(int i=0;i<arr.size();i++)
			{
				char* ch = arr[i].c_str();
				if(isdigit(ch))
					cout << ch << " ";
				cout << endl;
			}
		}
	}
	infile.close();
	return 0;
}
	
