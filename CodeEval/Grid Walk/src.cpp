#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;

int find_points(int x,int y,int count)
{
	int sum = 0;
	int a = abs(x);
	int b = abs(y);
	while(a!=0)
	{
		sum += (a%10);
		a /= 10;
	}
	while(b!=0)
	{
		sum += (b/10);
		b /= 10;
	}
	if(sum <= 19)
		count++;
	else
		return count;
	find_points(x+1,y,count);
	find_points(x-1,y,count);
	find_points(x,y+1,count);
	find_points(x,y-1,count);
}

int main(void)
{
	cout << find_points(0,0,0) << endl;
	return 0;
}
	
