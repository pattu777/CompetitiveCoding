#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stack>

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
			vector<int> v1;
			stack<int> s;

			string delimiters = ";,";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				v1.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);
					
			int sum = v1.back();
			bool res = 0;	
			v1.pop_back();
			s.push(sum+1);

			vector<int>::iterator c1,c2;
			for(c1 = v1.begin(),c2=v1.end();c1<=c2;)
			{
				if((*c1+*c2)==sum)
				{
					cout << *c1 << "," << *c2 << ";";
					res = 1;
					c1++;
					c2--;
				}
				else if((*c1+*c2)>sum)
					c2--;
				else if((*c1+*c2)<sum)
					c1++;
			}
			
			if(res == 0)
				cout << "NULL";
			cout << endl;

	   	}
	}
	return 0;
}
