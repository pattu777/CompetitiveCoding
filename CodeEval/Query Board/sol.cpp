#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>

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
			
