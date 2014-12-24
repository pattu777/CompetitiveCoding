#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void get_dir(long long int row, long long int col)
{
   bool[row][col]; 
   for(int i=0;i<row;i++)
}

int main(void)
{
    string line;
    getline(cin, line);
    int testcases = atoi(line.c_str());
    while(testcases--)
    {
        long long int row, col;
        cin >> row >> col;
        get_dir(row, col);
    }
    return 0;
}

