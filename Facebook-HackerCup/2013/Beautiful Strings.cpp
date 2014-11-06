#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
#include<ctype.h>

using namespace std;

int main(int argc,char *argv[])
{
  	ifstream file;
	ofstream op;
	op.open("output.txt");
	string line;
	file.open(argv[1]);
	getline(file,line);
	int num_of_testcases = atoi(line.c_str());
	int x = 1;

	while(x <= num_of_testcases)
	{
		getline(file,line);
		string str;		
		int max = 0;
		vector<int> V;

		for(int j=0;j<=line.length();j++)
		{
			if((line[j] >= 65) && (line[j] <= 122))
				str.push_back(tolower(line[j]));
		}
		sort(str.begin(),str.end());

		for(int i=0,k=26;i<str.length();k--)
		{
			int j=i+1,char_repeats = 1;
			while(str[j] == str[i])
			{
				char_repeats++;
				j++;
			}
			i = j;
			V.push_back(char_repeats); 
		}

		sort(V.begin(),V.end());
		for(int j=0,k=26-V.size()+1 ; j < V.size() ; j++,k++)
			max += ( k * V[j] );
	
		op << "Case #" << x << ": " << max << endl;
		x++;
	}
	file.close();
	return 0;
}
