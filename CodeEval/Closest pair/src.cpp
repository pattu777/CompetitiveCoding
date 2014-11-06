#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>

using namespace std;

struct Co_ord
{
	float x;
	float y;
};

int main(int argc,char *argv[])
{
	ifstream file;
	string line;
	
	file.open(argv[1]);
	while(getline(file,line))
	{
		if(line == "0")
			break;
		else
		{
			vector<int> vec;
			int n = atoi(line.c_str());
			Co_ord points[n];
			for(int i=0;i<n;i++)
			{
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
				points[i].x = vec[0];
				points[i].y = vec[1];
				vec.clear();
			}
			vector<float> dist;
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					float d = sqrt (pow(points[i].x-points[j].x,2)+pow(points[i].y-points[j].y,2));
					dist.push_back(d);
				}
			}
			sort(dist.begin(),dist.end());
			if(dist[0]<10000)
				cout << std::fixed << std::setprecision(4) << dist[0] << endl;
			else
				cout << "INFINITY" << endl;
		}
	}
	file.close();
	return 0;
}

