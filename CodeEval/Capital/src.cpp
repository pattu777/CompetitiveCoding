#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	string line;

	infile.open(argv[1]);
	while(getline(infile,line))
	{
		line[0] = toupper(line[0]);
		cout << line[0];
		for(int i=1;i<line.length();i++)
		{
			if(line[i-1] == "\b")
			{
				line[i] = toupper(line[i]);
				cout << line[i];
			}
			else
				cout << line[i];
		}
		cout << endl;
	}
	infile.close();
	return 0;
}
