#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int rev(int num)
{
    int rev_num = 0;
    while(num != 0)
    {
        rev_num = (rev_num*10) + (num % 10);
        num = num/10;
    }
    return rev_num;
}

int main(int argc, char** argv)
{
    int testcases;
    cin >> testcases;

    int i = 0;
    while(i < testcases)
    {
        int num1, num2;
        cin >> num1 >> num2;

        int sum = rev(num1) + rev(num2);
        cout << rev(sum) << endl;

        i++;
    }
    return 0;
}

