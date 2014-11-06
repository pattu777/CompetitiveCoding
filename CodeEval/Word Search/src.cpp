#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<queue>
#include<algorithm>

using namespace std;
//queue<char> myQ;

bool search(char arr[3][4],int x,int y,string line,int line_pos,string str)
{
	if(line == str)
		return 1;
	else
	{
		cout << str << "\t";
		char s = line[line_pos];
		if(arr[x+1][y] == s)
		{
			str.push_back(s);
			search(arr,x+1,y,line,line_pos+1,str);
		}
		if(arr[x][y+1] == s)
                {       
                        str.push_back(s);
                        search(arr,x,y+1,line,line_pos+1,str);
                }
		if(arr[x-1][y] == s)
                {       
                        str.push_back(s);
                        search(arr,x-1,y,line,line_pos+1,str);
                }
		if(arr[x][y-1] == s)
                {       
                        str.push_back(s);
                        search(arr,x,y-1,line,line_pos+1,str);
                }
		else 
			return 0;
	}
}


int main(int argc,char* argv[])
{
	char arr[3][4] = {
			{'A','B','C','E'},
			{'S','F','C','S'},
			{'A','D','E','E'}
			};


	ifstream infile;
	string line;
	infile.open(argv[1]);
	while(getline(infile,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			char ch = line[0];
			bool res = 0;
			string str;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<4;j++)
				{
					if(arr[i][j] == ch)
					{
						str.push_back(ch);
						res = search(arr,i,j,line,1,str);
						str.clear();
					}
				}
			}
			/*if(!res)
				cout << "False" << endl;
			else
				cout << "True" << endl;*/
		}
		cout << endl;
	}
	infile.close();
	return 0;
}

