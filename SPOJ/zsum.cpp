#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void compute_expr(long int num1, long int num2)
{
    long long int x = pow(num1, num2) + pow(num1, num1) + 
}

int main(void)
{
    while()
    {
        string line;
        getline(cin,line);
        if(line == "0 0")
            break;

        stringstream linestream(line);
        long int num1, num2;
        linestream >> num1 >> num2;
        compute_expr(num1, num2);
    }
    return 0;
}

