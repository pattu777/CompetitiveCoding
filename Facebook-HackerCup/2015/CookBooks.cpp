#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
#include<ctype.h>

using namespace std;

long long int tweak_num(long long int num)
{
    if(num <= 10)
        return num;
    else
    {
        long long int x = num;
        vector<int> vec, arr;
        while(num != 0)
        {
            vec.push_back(num % 10);
            num /= 10;
        }
        long long int i=vec.size()-1;
        while(i >=0)
        {



}

int main(int argc,char *argv[])
{
  	ifstream file;
	ofstream op;
	op.open("output.txt");
	file.open(argv[1]);

	string line;
	getline(file,line);
	int tcases = atoi(line.c_str());
	int x = 1;

	while(x <= tcases)
	{
		//getline(file,line);
        long long int num;// = atoll(line.c_str());
        cin >> num;
				
        op << "Case #" << x << ": " << tweak_num(num) << endl;
		x++;
	}
	file.close();
	return 0;
}

