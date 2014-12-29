#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string line;
    getline(cin,line);
    int tcases=atoi(line.c_str());
    while(tcases--)
    {
        getline(cin, line);
        getline(cin, line);
        long long int sum=0, num=atoll(line.c_str());
        for(long long int i=0; i<num; i++)
        {
            getline(cin, line);
            sum += (atoll(line.c_str()) % num);
        }
        if((sum%num)==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

