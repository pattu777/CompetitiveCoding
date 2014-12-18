#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void print_reverse(long int num)
{
    vector<bool> vec;
    long int len=-1, rev_num=0;
    while(num != 0)
    {
        vec.push_back(num%2);
        len++;
        num = num/2;
    }
    for(long int i=0; i<vec.size(); i++, len--)
        rev_num += vec[i] * pow(2, len);
    cout << rev_num << endl;
}

int main(void)
{
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        long int num;
        cin >> num;
        if((num%2) == 1)
            cout << num << endl;
        else
            print_reverse(num);
    }
    return 0;
}

