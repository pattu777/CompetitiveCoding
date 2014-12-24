#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
map<pair<int, int>, int> mymap;

long long int get_stirling_number(long long int n, long long int m)
{
    if((n==0)&&(m==0))
    {
        mymap.insert(make_pair(make_pair(0,0), 1));
        return 1;
    }
    else if( ((n!=0)&&(m==0)) || ((n==0)&&(m!=0)) )
    {
        mymap.insert(make_pair(make_pair(n,0), 0));
        mymap.insert(make_pair(make_pair(0,m), 0));
        return 0;
    }
    else
        return m * (get_stirling_number(n-1, m) + get_stirling_number(n-1, m-1));
}

int main(void)
{
    string line;
    getline(cin, line);
    int testcases = atoi(line.c_str());
    while(testcases--)
    {
        long long int num1, num2;
        cin >> num1 >> num2;
        cout << get_stirling_number(num1, num2)%2 << endl;
    }
    return 0;
}

