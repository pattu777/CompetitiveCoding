#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int var;
	while(1)
	{
		char* str;
		str = new char[4];
		cin >> str;
		var = atoi(str);
		if(var == 42)
			return 0;
		else
			cout << var << endl;
	}
}

