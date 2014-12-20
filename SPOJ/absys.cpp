#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void get_num(vector<string> vec)
{
    string str("machula");
    long int num;
    if(vec[0].find(str) != string::npos)
    {
        num = atoi(vec[2].c_str()) - atoi(vec[1].c_str());
        cout << num << " + " << vec[1] << " = " << vec[2] << endl;
    }
    else if(vec[1].find(str) != string::npos)
    {
        num = atoi(vec[2].c_str()) - atoi(vec[0].c_str());
        cout << vec[0] << " + " << num << " = " << vec[2] << endl;
    }
    else
    {
        num = atoi(vec[0].c_str()) + atoi(vec[1].c_str());
        cout << vec[0] << " + " << vec[1] << " = " << num << endl;
    }
}

int main(void)
{
    string line;
    getline(cin, line);
    int tcases = atoi(line.c_str());
    while(tcases--)
    {
        string line;
        getline(cin,line);
        getline(cin, line);

        vector<string> vec;
        size_t a, b, c;
        a = line.find("+");
        vec.push_back(line.substr(0, a-1));
        b = line.find("=");
        vec.push_back(line.substr(a+2, b-a-2));
        vec.push_back(line.substr(b+2, line.size()));

        get_num(vec);
    }
    return 0;
}

