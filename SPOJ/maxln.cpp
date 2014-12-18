#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int testcases, i=1;
    cin >> testcases;
    while(i <= testcases)
    {
        long int radius;
        cin >> radius;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        cout << "Case " << i << ": " << max((double)(2*radius), 0.25+(4*pow(radius, 2))) << endl;
        i++;
    }
    return 0;
}

