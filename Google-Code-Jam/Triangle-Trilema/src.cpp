#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<fstream>
#include<ostream>

using namespace std;

struct vertex
{
	int x;
	int y;
};

float slope(Vertex M,Vertex N)
{
	return ( (N.y-M.y)/(N.x-M.x) );
}
	
bool is_valid(vertex A,Vertex B,Vertex C)
{
	if( ((A.x==B.x)&&(A.y==B.y)) || ((B.x==C.x)&&(B.y==C.y)) || ((A.x==C.x)&&(A.y==C.y)) )
		return 0;
	else if( (slope(A,B) ==0) || (slope(B,C)==0) || (slope(A,C)==0) )
		return 0;
	else
		return 1;
}

int which_side(A,B,C)
{
	float sides[3];
	sides[0] = sqrt(pow(A.y-B.y,2)+pow(A.x-B.x,2));
	sides[1] = sqrt(pow(B.y-C.y,2)+pow(B.x-C.x,2));
	sides[2] = sqrt(pow(A.y-C.y,2)+pow(A.x-C.x,2));
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(sides[i] == sides[j])
				return 1;
		}
	}
	return 0;
}

int which_angle(Vertex A,Vertex B,Vertex C)
{
	float slopes[3];
	slopes[0] = slope(A,B);
	slopes[1] = slope(B,C);
	slopes[2] = slope(C,A);
	float angles[3];
	angles[0] = slopes[0]*slopes[1];
	angles[1] = slopes[1]*slopes[2];
	angles[2] = slopes[2]*slopes[0];	
}

int main(int argc,char *argv[])
{
	ifstream infile;
	ofstream outfile;
	outfile.open("output.txt");
	string line;

	infile.open(argv[1]);
	getline(infile,line);
	int cases = atoi(line.c_str());
	for(int i=1;i<=cases;i++)
	{
		vector<int> vec;
		getline(file,line);
		string delimiters = " ";
		size_t current;
		size_t next = -1;
		do
		{
			current = next + 1;
			next = line.find_first_of( delimiters, current );
			vec.push_back(atoi((line.substr( current, next - current )).c_str()));
		}while (next != string::npos);

		vertex A,B,C;
		A.x = vec[0];A.y=vec[1];B.x = vec[2];B.y = vec[3];C.x = vec[4];C.y = vec[5];
		if(!is_valid(A,B,C))	
			outfile << "Case #" << i << ": " << "not a triangle" << endl;
		else
		{
			int angle = which_angle(A,B,C);
			int side = which_side(A,B,C);		





