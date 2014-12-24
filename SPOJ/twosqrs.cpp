#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool is_square_sum(unsigned long long int num)
{
    for(unsigned long long int i=0; i<=sqrt(num);i++)
    {
        unsigned long long int pwi=pow(i,2);
        long double pwj=sqrt(num-pwi);
        unsigned long long int pw=pwj;
        if(pw==pwj)
            return true;
    }
    return false;
}

int main(void)
{
    int tcase;
    cin >> tcase;
    while(tcase--)
    {
        unsigned long long int num;
        cin >> num;
        if(is_square_sum(num))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

