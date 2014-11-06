#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> vec,path;

void string_tokenizer(string str)
{
	string delimiters = ",";
	size_t current;
	size_t next = -1;
	do
	{
		current = next + 1;
		next = str.find_first_of( delimiters, current );
		vec.push_back(atoi((str.substr( current, next - current )).c_str()));
	}while (next != string::npos);
}

void minimum_path(int *arr,int x,int y,int size,int sum)
{
	if((x==size-1)&&(y==size-1))
	{
		path.push_back(sum);
		return;
	}
	else
	{
		int a = *(arr+(y+1)*size+x);
		int b = *(arr+y*size+x+1);
		if(x==size-1)
			minimum_path(arr,x,y+1,size,sum+a);
		
		else if(y==size-1)
			minimum_path(arr,x+1,y,size,sum+b);
		
		else
		{
			minimum_path(arr,x,y+1,size,sum+a);
			minimum_path(arr,x+1,y,size,sum+b);
		}
	}
}

int main(int argc,char *argv[])
{
	ifstream file;
	string line;

	file.open(argv[1]);
	while(getline(file,line))
	{
		vec.clear();
		path.clear();
		int size = atoi(line.c_str());
		int arr[size][size];
		for(int i=0;i<size;i++)
		{
			string str;
			getline(file,str);
			string_tokenizer(str);
		}
		for(int i=0,k=0;i<size;i++)
		{
			for(int j=0;j<size;j++,k++)
				arr[i][j] = vec[k];
		}
		int sum = arr[0][0];
		minimum_path(reinterpret_cast<int *> (arr),0,0,size,sum);
		sort(path.begin(),path.end());
		cout << path[0] << endl;
	}
	file.close();
	return 0;
}

