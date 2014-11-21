#include<iostream>
#include<fstream>
#include<ostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	string line;
	outfile.open("output.txt");

	infile.open(argv[1]);
	getline(infile,line);
	int cases = atoi(line.c_str());
	for(int i=1;i<=cases;i++)
	{
		getline(infile,line);
		int cash = atoi(line.c_str());
		getline(infile,line);
		int no_of_items = atoi(line.c_str());
		getline(infile,line);
		vector<int> price;
		vector<int>::iterator it;
		string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = line.find_first_of( delimiters, current );
			price.push_back(atoi((line.substr( current, next - current )).c_str()));
		}while (next != string::npos);

		for(int j=0;j<price.size();j++)
		{
			it = find(price.begin()+j+1,price.end(),cash-price[j]);
			if(it != price.end())
			{
				outfile << "Case #" << i << ": " << j+1 << " " << it-price.begin()+1 << endl;
				break;
			}
		}
	}
	infile.close();
	outfile.close();
	return 0;
}




