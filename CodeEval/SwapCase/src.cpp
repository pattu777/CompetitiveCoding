#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	string line;

	infile.open(argv[1]);
	while(getline(infile,line))
	{
		
		for(int i=0;i<line.length();i++)
		{
			if(isalpha(line[i]))
				line[i] = isupper(line[i]) ? tolower(line[i]) : toupper(line[i]);
		}
		cout << line << endl;
	}
	infile.close();
	return 0;
}
