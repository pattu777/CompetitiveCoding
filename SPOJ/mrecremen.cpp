#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long int> vec;

long long int rec(long long int num)
{
    if(num==0)
        return 0;
    else
    {
        long long int x=rec(num-1);
        long long int y=x-num, z=x+num;
        sort(vec.begin(), vec.end());
        if( (y>=0)&&(!binary_search(vec.bgin(), vec.end(), y)) )
            return x-num;
        else
            return x+num;
    }
}

int main(void)
{
    while(1)
    {
        long long int num;
        cin >> num;
        if(num==-1)
            break;
        cout << rec(num) << endl;
        vec.clear();
    }
    return 0;
}

