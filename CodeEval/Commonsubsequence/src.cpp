#include<isotream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main(int argc,char* argv[])
{
	ifstream infile;
	string line;

	infile.open(argv[1]);
	while(getline(infile,line))
	{
		if(line.lengt()==0)
			continue;
		else
		{
			vector<string> vec;
			
