#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
//map<int, int> mymap;

long long int get_rectangles(int num)
{
    if(num == 2)
        return 1;
    else
    {
        if((num%2)==0)
            return 2+get_rectangles(num-1);
        else
            return 1+get_rectangles(num-1);
    }
}

int main(void)
{
    int num, sum=0;
    cin >> num;
    //mymap[1] = 1;
    for(int i=1; i<=num ;i++)
    {
        if( ((i%2)==0) && (i!=2) )
            sum += 2;
        else 
            sum += 1;
    }
    cout << sum << endl;
    return 0;
}

