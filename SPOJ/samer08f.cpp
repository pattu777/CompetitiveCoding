#include <iostream>
#include <math.h>

using namespace std;

long long int rect_nums(int num)
{
    long long int x = (num*(num+1)*(2*num+1)) / 6;
    return x;
}

int main(void)
{
    while(1)
    {
        int num;
        cin >> num;
        if(num == 0)
            break;

        cout << rect_nums(num) << endl;
    }
    return 0;
}

