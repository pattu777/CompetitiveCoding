#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

/*void print_matrix(int *arr,int i,int j,int row,int col)
{
	if(*(arr+j*col+i)=="*")
		cout << "*" << endl;
	else
	{
		int count = 0;
		if(*(arr+(j-1)*col+i)=="*")
			count++;
		else if(*(arr+(j+1)*col+i)=="*")
                        count++;
		else if(*(arr+(j-1)*col+i+1)=="*")
                        count++;
		else if(*(arr+j*col+i+1)=="*")
                        count++;
		else if(*(arr+(j+1)*col+i+1)=="*")
                        count++;
		else if(*(arr+(j-1)*col+i-1)=="*")
                        count++;
		else if(*(arr+j*col+i-1)=="*")
			count++;
		else if(*(arr+(j+1)*col+i-1)=="*")
                        count++;
		cout << count << endl;
		
		if((i==row-1)&&(j==col-1))
			return;
	}
}*/

int main(int argc,char *argv[])
{
	ifstream file;
	string line;

	file.open(argv[1]);
	while(getline(file,line))
	{
		char *cstr = new char[line.length()+1];
		strcpy(cstr,line.c_str());
		int row = (int)cstr[0];
		int col = (int)cstr[2];
		cout << row << " " << col << endl;
		char arr[row][col];
		for(int i=0,k=4;i<row;i++)
		{
			for(int j=0;j<col;j++,k++)
				arr[i][j] = cstr[k];
		}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
				cout << arr[i][j];
				//print_matrix(reinterpret_cast<int *> (arr),i,j,row,col);
		}
		cout << endl;
		delete [] cstr;
	}
	file.close();
	return 0;
}

