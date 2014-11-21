#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<fstream>
#include<ostream>
#include<cmath>

using namespace std;

int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	string line;

	infile.open(argv[1]);
	outfile.open("output.txt");
	getline(infile,line);
	int cases = atoi(line.c_str());
	for(int i=1;i<=cases;i++)
	{
		vector<string> v;
		vector<int> vec(3,0);
		int res = 0,dots = 0;
		for(int j=0;j<4;j++)
		{
			getline(infile,line);
			v.push_back(line);
		}
		char arr[4][4];
		for(int j=0;j<4;j++)
		{
			string str = v[j];
			if(v[j] == ".")
				dots++;
			for(int k=0;k<4;k++)
				arr[j][k] = str[k];
 		}
		
//------------------------------------Check the rows--------------------------------------//

		for(int j=0;j<4;j++)
		{
			for(int k=0;k<4;k++)
			{
				if(arr[j][k] == "O")
					vec[0]++;
				else if(arr[j][k] == "X")
					vec[1]++;
				else if(arr[j][k] == "T")
					vec[2]++;
			}
			if( (vec[0] == 4) || ((vec[1] == 3) && (vec[2] == 1)) )
			{
				res = 1;
				break;
			}
			if( (vec[1] == 4) || ((vec[1] == 3) && (vec[2] == 1)) )
                        {       
                                res = 2;
                                break;
                        }
		}
		vec.clear();
///---------------------Check for colomns----------------------------------------//

		for(int j=0;j<4;j++)
                {
                        for(int k=0;k<4;k++)
                        {
                                if(arr[k][j] == "O")
                                        vec[0]++;
                                else if(arr[k][j] == "X")
                                        vec[1]++;
                                else if(arr[k][j] == "T")
                                        vec[2]++;
                        }
                        if( (vec[1] == 4) || ((vec[1] == 3) && (vec[2] == 1)) )
                        {       
                                res = 1;
                                break;
                        }
                        if( (vec[0] == 4) || ((vec[0] == 3) && (vec[2] == 1)) )
                        {
                                res = 2;
                                break;
                        }
                }
		vec.clear();
//-----------------Check the diagonals---------------------------------------------//

		for(int j=0;j<4;j++)
		{
			if(arr[j][j] == "O")
	                        vec[0]++;
                        else if(arr[j][j] == "X")
                                vec[1]++;
                        else if(arr[j][j] == "T")
                                vec[2]++;
		}
		if( (vec[1] == 4) || ((vec[1] == 3) && (vec[2] == 1)) )
                {
                	res = 1;
                        break;
                }
                if( (vec[0] == 4) || ((vec[0] == 3) && (vec[2] == 1)) )
                {
	                res = 2;
        	        break;
                }
		vec.clear();
//----------------------------Check for the other diagonal--------------------------------------//

		for(int j=0;j<4;j++)
                {
                        for(int k=3;k>=0;k--)
			{
				if(arr[j][k] == "O")
                                	vec[0]++;
                        	else if(arr[j][k] == "X")
                                	vec[1]++;
                        	else if(arr[j][k] == "T")
                                	vec[2]++;
                	}
		}
		if( (vec[1] == 4) || ((vec[1] == 3) && (vec[2] == 1)) )
                {
                        res = 1;
                        break;
                }
                if( (vec[0] == 4) || ((vec[0] == 3) && (vec[2] == 1)) )
                {
                        res = 2;
                        break;
                }
		vec.clear();
//---------------------------------------------------------------------------------------------------//


		getline(infile,line);
	}
	infile.close();
	outfile.close();
	return 0;
}

