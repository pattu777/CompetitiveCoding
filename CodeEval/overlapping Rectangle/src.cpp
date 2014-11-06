#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

struct Rect
{
	int topx;
	int topy;
	int botx;
	int boty;
};

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
			vector<int> vec;
			string delimiters = ",";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atoi((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);			

			Rect ra,rb;
			ra.topx = vec[0];
			ra.topy = vec[1];
			ra.botx = vec[2];
			ra.boty = vec[3];
			rb.topx = vec[4];
			rb.topy = vec[5];
			rb.botx = vec[6];
			rb.boty = vec[7];

			if( ra.topx >= rb.botx || ra.botx <= rb.topx || ra.topy <= rb.boty || ra.boty >= rb.topy  )
				cout << "False" << endl;
			else
				cout << "True" << endl;
		}
	}
	infile.close();
	return 0;
}
 			
