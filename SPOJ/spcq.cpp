#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

long long int get_nice_number(long long int num)
{
    long long int dsum=0, x=num;
    while(num)
    {
        dsum += (num%10);
        num = num/10;
    }
    for(long long int i=dsum;;i++, x++)
    {
        if((x%i)==0)
            return x;
    }
}

int main(void)
{
    string line;
    getline(cin, line);
    int testcases = atoi(line.c_str());
    while(testcases--)
    {
        long long int num;
        cin >> num;
        cout << get_nice_number(num) << endl;
    }
    return 0;
}

