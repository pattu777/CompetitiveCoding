#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
vector<long long int> vec;

void will_stop(long long int num)
{
    while(num > 1)
    {
        if(binary_search(vec.begin(), vec.end(), num))
        {
            cout << "NIE" << endl;
            return;
        }
        else
        {
            vec.push_back(num);
            sort(vec.begin(), vec.end());
            if((num%2) == 0)
                num = num/2;
            else
                num = (3*num) + 3;
        }
    }
    cout << "TAK" << endl;
}

int main(void)
{
    string line;
    getline(cin, line);
    int num = atoll(line.c_str());
    will_stop(num);
    return 0;
}

