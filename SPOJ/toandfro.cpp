#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void decrypt_msg(int clm, string msg)
{
    vector<string> vec;
    for(int i=0; i<msg.size(); i+=clm)
        vec.push_back(msg.substr(i, clm));

    for(int i=0; i<clm; i++)
    {
        for(int j=0; j<vec.size(); j++)
        {
            if((j%2)==0)
                cout << vec[j][i];
            else
                cout << vec[j][clm-i-1];
        }
    }
    cout << endl;
}

int main(void)
{
    while(1)
    {
        string line;
        getline(cin, line);
        int clm = atoi(line.c_str());
        if(clm == 0)
            break;

        getline(cin,line);
        decrypt_msg(clm, line);
    }
    return 0;
}

