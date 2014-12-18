#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long int> vec;

long long int is_happy(long long int num, long long int counter)
{
    if(binary_search(vec.begin(), vec.end(), num))
        return -1;
    else if(num == 1)
        return counter;
    else
    {
        counter++;
        long long int sum=0;
        vec.push_back(num);
        while(num != 0)
        {
            sum += pow(num%10, 2);
            num = num/10;
        }
        return is_happy(sum, counter);
    }
}

int main(void)
{
    string line;
    cin >> line;
    long long int num = atoi(line.c_str());
    long long counter = 0;
    cout << is_happy(num, counter) << endl;
    return 0;
}

