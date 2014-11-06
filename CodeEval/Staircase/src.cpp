#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int no_of_ways(int x)
{
	if(x <= 2)
		return x;
	else
		return(no_of_ways(x-1) + no_of_ways(x-2)) ;
}

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
			int num = atoi(line.c_str());
			cout << no_of_ways(num) << endl;
		}	
	}	
	infile.close();
	return 0;
}
