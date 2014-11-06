#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
#include<cstring>

using namespace std;
vector<string> v1;
vector<int> v2;

void string_tokenize(string str,string delim)
{
	size_t current;
	size_t next = -1;
	do
	{
		current = next + 1;
		next = line.find_first_of( delim, current );
		vec.push_back(str.substr( current, next - current ));
	}while (next != string::npos);
}

int main(int argc,char *argv[])
{
	ifstream infile;
	string line;

	infile.open(argv[1]);
	while(getline(file,line))
	{
				
