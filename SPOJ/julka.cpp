#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int testcases = 10;
    while(testcases--)
    {
        string line;
        getline(cin,line);
        long long int sum = atoll(line.c_str());
        getline(cin,line);
        long long int klaudia = atoll(line.c_str()), natalia;
        natalia = (sum-klaudia)/2;
        cout << natalia+klaudia << endl;
        cout << natalia << endl;
    }
    return 0;
}

