#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>

using namespace std;

int main(int argc,char *argv[])
{
	map<float,string> mymap;
	map<float,string>::iterator c1;
	
	mymap.insert(pair<float,string> (100.00,"ONE HUNDRED"));
	mymap.insert(pair<float,string> (50.00,"FIFTY"));
	mymap.insert(pair<float,string> (20.00,"TWENTY"));
	mymap.insert(pair<float,string> (10.00,"TEN"));
        mymap.insert(pair<float,string> (5.00,"FIVE"));
        mymap.insert(pair<float,string> (2.00,"TWO"));
        mymap.insert(pair<float,string> (1.00,"ONE"));
        mymap.insert(pair<float,string> (.50,"HALF DOLLAR"));
	mymap.insert(pair<float,string> (.25,"QUARTER"));
        mymap.insert(pair<float,string> (.10,"DIME"));
        mymap.insert(pair<float,string> (.05,"NICKEL"));
        mymap.insert(pair<float,string> (.01,"PENNY"));

	for(c1 = mymap.begin();c1 != mymap.end(); c1++)
		cout << c1->first << "====>" << c1->second << endl;
	
	ifstream infile;
	string line;
		
	infile.open(argv[1]);
	/*while(getline(file,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			vector<float> vec;
			vector<string> myV;
			string delimiters = ";";
			size_t current;
			size_t next = -1;
			do
			{
				current = next + 1;
				next = line.find_first_of( delimiters, current );
				vec.push_back(atof((line.substr( current, next - current )).c_str()));
			}while (next != string::npos);

			float PP = vec[0];
			float cash = vec[1];

			if(cash < PP)
				cout << "ERROR" << endl;
			else if(cash == PP)
				cout << "ZERO" << endl;
			else
			{
				for(c1 = mymap.begin();c1 != mymap.end(); c1++)
				{
					
					
			}
		}
	}*/
	infile.close();
	return 0;
}

			
