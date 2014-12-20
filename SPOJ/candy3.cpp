#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int tcases;
    cin >> tcases;
    while(tcases--)
    {
        string line;
        getline(cin,line);
        long long int num, sum=0;
        cin >> num;
        for(long long int i=0,x; i<num; i++)
        {
            cin >> x;
            sum += x;
        }
        if((sum%num)==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

