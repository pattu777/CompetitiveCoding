#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

void print_top_right(int *a, int x1, int y1, int x2, int y2,int row,int col);
void print_bottom_left(int *a, int x1, int y1, int x2, int y2,int row,int col);

void print_top_right(int *a, int x1, int y1, int x2, int y2,int row,int col)
{
        for(int i = x1; i<=x2; i++)
                cout << *(a+y1*col+i) << " ";

        for(int j = y1 + 1; j <= y2; j++)
                cout << *( a+j*col+x2) << " ";

        if(x2-x1 > 0)
                print_bottom_left(a, x1, y1 + 1, x2-1, y2,row,col);
}

void print_bottom_left(int *a, int x1, int y1, int x2, int y2,int row,int col)
{
        for(int i = x2; i>=x1; i--)
                cout << *(a+y2*col+i) << " ";

        for(int j = y2 - 1; j >= y1; j--)
                cout << *(a+j*col+x1) << " ";

        if(x2-x1 > 0)
                print_top_right(a, x1+1, y1, x2, y2-1,row,col);
}


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
			vector<int> vec;
			
			string delimiters = "; ";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);
			int row = vec[0];
			int col = vec[1];
			int arr[row][col];
			vec.erase(vec.begin(),vec.begin()+2);
			for(int i=0,k=0;i<row;i++)
			{
				for(int j=0;j<col;j++,k++)
				{
					arr[i][j] = vec[k];
				}
			}
			print_top_right(reinterpret_cast<int *> ( arr ),0,0,row-1,col-1,row,col);
			cout << endl;
		}
	}
	file.close();
	return 0;
}
