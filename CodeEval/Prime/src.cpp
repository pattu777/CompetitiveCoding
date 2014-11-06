#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<fstream>

using namespace std;

void primes(long int num)
{
	vector<bool> vec(num+1,true);

        for(long int i=2; i<= (long int)sqrt(num) ;i++)
        {
                if(vec[i] == true)
                {
                        vec[i] = 1;
                        for(long int j=i*i,k=i;j<=num;j = i*k)
                        {
                                vec[j] = false;
                                k++;
                        }
                }
        }
        for(long int i=2;i<vec.size();i++)
        {
                if(vec[i] == true)
                        cout << i << ",";
        }
        cout << endl;

}

int main(int argc,char *argv[])
{
	ifstream file;
	string line;

	file.open(argv[1]);
	while(getline(file,line))
	{
		if(line.length()==0)
			continue;
		else
		{
			long int x = atol(line.c_str());
			primes(x);
		}
	}
	file.close();
	return 0;
}

