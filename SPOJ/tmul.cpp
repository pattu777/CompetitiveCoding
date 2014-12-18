#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        long int num1, num2;
        cin >> num1 >> num2;
        long long int x = num1*num2;
        cout << x << endl;
    }
    return 0;
}

