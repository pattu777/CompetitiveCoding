#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void get_series(signed int num1, signed int num2, signed int num3)
{
    if((num2-num1) == (num3 -num2))
    {
        cout << "AP " << num3 + (num3-num2) << endl;
        return;
    }
    else
    {
        cout << "GP " << num3 * (signed int)(num3/num2) << endl;
        return;
    }
}

int main(void)
{
    string line;
    while(1)
    {
        signed int num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        if((num1 == 0) && (num2 == 0) && (num3 ==0))
            break;

        get_series(num1, num2, num3);
    }
    return 0;
}

