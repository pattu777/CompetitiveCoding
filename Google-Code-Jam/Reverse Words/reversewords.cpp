#include<iostream>
#include<fstream>
#include<ostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream file;
	ofstream out;
	out.open("output.txt");
	string line;
	
	file.open(argv[1]);
	getline(file,line);
	int cases = atoi(line.c_str());
	for(int i=1;i<=cases;i++)
	{
		getline(file,line);
		vector<string> vec;

		string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = line.find_first_of( delimiters, current );
			vec.push_back(line.substr( current, next - current ));
		}while (next != string::npos);
		
		out << "Case #" << i << ": ";
		for(int j=vec.size()-1;j>=0;j--)
			out << vec[j] << " ";
		out << endl;
	}
	file.close();
	out.close();
	return 0;
}
