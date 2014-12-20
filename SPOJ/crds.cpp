#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void)
{
    string line;
    getline(cin, line);
    int testcases = atoi(line.c_str());
    while(testcases--)
    {
        long long int num;
        cin >> num;
        cout << (num*(3*num+1)/2) % 1000007 << endl;
    }
    return 0;
}

