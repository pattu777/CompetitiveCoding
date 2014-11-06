#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;
vector<long int> num;

void string_tokenizer(string s)
{
  	string delimiters = " ";
	size_t current;
	size_t next = -1;
	do
	{
		current = next + 1;
		next = s.find_first_of( delimiters, current );
		num.push_back(atoi((s.substr( current, next - current )).c_str()));
	}while (next != string::npos);
}


long int smallest_num(vector<long int> vec,long int b)
{
	long int a = vec.size();
	for(int small = 0;;small++)
	{
		vector<long int>::const_iterator it;
		it = find(vec.begin()+a-b,vec.end(),small);
		if((it == vec.end())) 
			return small;
	}
}


int main(int argc,char *argv[])
{
	ifstream file;
	ofstream op;
	op.open("output.txt");	
	string line;
	
	file.open(argv[1]);
	getline(file,line);

	int num_of_testcases = atoi(line.c_str());
	int x = 1;

	while(x <= num_of_testcases)
	{
		num.clear();
		getline(file,line);
		string_tokenizer(line);

		long int n = num[0];
		long int k = num[1];
		num.clear();	

		getline(file,line);
		string_tokenizer(line);
		
		vector<long int> m;
		m.push_back(num[0]);
		for(long int i=1;i < n;i++)
		{
			if(i < k)
				m.push_back(((num[1] * m[i - 1]) + num[2]) % num[3]);	
			else			
				m.push_back(smallest_num(m,k));
		}

		op << "case #" << x << ": " << m[n-1] << endl;
		x++;
	}
	file.close();
	op.close();
	return 0;
}

