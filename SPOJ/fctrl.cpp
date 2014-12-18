#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long int fact_count_zeros(int num)
{
    long int counter=0, i=1, base=5;
    long int power = pow(base,i);
    while(power <= num)
    {
        counter += (num/power);
        i++;
        power = pow(base, i);
    }
    return counter;
}

int main(int argc, char** argv)
{
    string line;
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        int num;
        cin >> num;
        cout << fact_count_zeros(num) << endl;
    }
    return 0;
}

