#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void find_series(long long int num1, long long int num2, long long int num3)
{
    long long int len = (num3*2) / (num2+num1);
    long long int diff = (num2-num1) / (len-5);
    long long int st_num = num1 - (2*diff);

    cout << len << endl;
    for(long long int i=0; i<len; i++, st_num += diff)
        cout << st_num << " ";
}

int main(void)
{
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        long long int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        find_series(num1, num2, num3);
        cout << endl;
    }
    return 0;
}

