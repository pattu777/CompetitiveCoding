#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> vec,path;
int no_of_ways = 0;

void traverse(int *arr,int x,int y,int size)
{
	if((x==size-1)&&(y==size-1))
	{
		no_of_ways++;
		return;
	}
	else
	{
		if(x==size-1)
		{	
			traverse(arr,x-1,y,size);
                        traverse(arr,x,y+1,size);
                        traverse(arr,x,y-1,size);
		}

		else if(y==size-1)
		{
			traverse(arr,x+1,y,size);
                        traverse(arr,x-1,y,size);
                        traverse(arr,x,y-1,size);
		}
		
		else
		{
			traverse(arr,x+1,y,size);
			traverse(arr,x-1,y,size);
			traverse(arr,x,y+1,size);
			traverse(arr,x,y-1,size);
		}
	}
}

int main(void)
{
	int arr[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			arr[i][j] = 0;
	}
	traverse(reinterpret_cast<int *> (arr),0,0,4);
	cout << no_of_ways << endl;
	return 0;
}

