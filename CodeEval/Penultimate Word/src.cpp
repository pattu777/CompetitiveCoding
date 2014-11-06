#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int main(int argc,char *argv[])
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
			char *str = new char[line.length()+1];
			strcpy(str,line.c_str());
			char *ptr1 = str , *ptr2 = str;
			while(*ptr2 != '\0')
			{
				if(*ptr2 == '\b')
				{
					ptr2++;
					ptr1 = ptr2;
				}
				else
					ptr2++;
			}
			while(*ptr1 != '\b')
			{
				cout << *ptr1;
				ptr1++;
			}
			cout << endl;
		}
	}
	
	infile.close();
	return 0;
}
