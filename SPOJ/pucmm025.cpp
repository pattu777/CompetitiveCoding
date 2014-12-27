#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int num_divisors(string str)
{
    vector<int> vec(str.size());
    int count=0;
    char* arr=new char[str.size()];
    strcpy(arr, str.c_str());

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != '0')
            vec.push_back(int(arr[i]));
    }

    for(int i=0; i<str.size(); i++)
        cout << (int)arr[i] << endl;

    return -1;

}

int main(void)
{
    while(1)
    {
        string line;
        getline(cin,line);
        cout << num_divisors(line) << endl;
    }
    return 0;
}

