#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>

using namespace std;
vector<string> vec;

void swap(string s,int x,int y)
{	
	char tmp = s[x];
	s[x] = s[y];
	s[y] = tmp;
	vec.push_back(s);
}

void permute(string str,int x,int y)
{
	for (int i = x+1; i <= y; i++)
       	{
         	swap(str,i,x);
		permute(str,x+1,y);
          	swap(str,x,i); 
       	}
}

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
			vec.push_back(line);
			permute(line,0,line.length()-1);
			sort(vec.begin(),vec.end());
			vector<string> v;
			v.push_back(vec[0]);
			for(int i=1;i<vec.size();i++)
			{
				if(!binary_search(v.begin(),v.end(),vec[i]))
					v.push_back(vec[i]);
			}
			for(int i=0;i<v.size();i++)
				cout << v[i] << " ";
			cout << endl;
		}
		vec.clear();
	}
	infile.close();
	return 0;
}

