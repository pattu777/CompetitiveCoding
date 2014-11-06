#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool is_safe_row(int* arr,int x,int y,int row_length,int col_length)
{
	bool res = 1;
	for(int i=0;i<col_length;i++)
	{
		if(i == y)
			continue;
		else
		{
			if(*(arr+x*col_length+y) == *(arr+x*col_length+i))
				return 0;
		}
	}
	return 1;
}

bool is_safe_col(int* arr,int x,int y,int row_length,int col_length)
{
	int num = *(arr+x*col_length+y);
	for(int i=0;i<row_length;i++)
        {
                if(i == x)
                        continue;
                else
                {
                        if(num == *(arr+i*col_length+y))
                                return 0;
                }
        }
        return 1;
}

bool is_safe_grid(int arr,int x,int y,int row_length,col_length,int grid_size)
{
	for(int i = )
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

			string delimiters = ";,";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);
			int size = vec[0];
			int grid_size = sqrt(size);
			vec.erase(vec.begin());
			
//---------------------------------------Initialize a 2-D matrix and add the elements---------------------------------------//

			int arr[size][size],k=0;
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size;j++,k++)
					arr[i][j] = vec[k];
			}

//--------------------------------For every element check whether its position is safe or not--------------------------------//

			bool res = 1;
			for(int i=0;i<size;i++)
			{
				for(int j=0;j<size;j++)
				{
					if(!( is_safe_col(arr,i,j,size,size) && is_safe_row(arr,i,j,size,size) && is_safe_grid(arr,i,j,size,size,grid_size) ) )
						res = 0;
				}
			}
			if(res == 0)
				cout << "False" << endl;
			else
				cout << "true" << endl;
		}
	}
	file.close();
	return 0;
}

