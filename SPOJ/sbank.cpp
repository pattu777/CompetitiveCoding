#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <map>

using namespace std;

int main(void)
{
    string line;
    cin >> line;
    int testcases = atoi(line.c_str());

    while(testcases--)
    {
        map<string, int> mymap;
        map<string, int>::iterator it;

        cin >> line;
        int accounts = atoi(line.c_str());
        while(accounts)
        {
            cin >> line;
            it = mymap.find(line);
            if(it != mymap.end())
                mymap[line] += 1;
            else
                mymap[line] = 1;
            accounts--;
        }
        for(it = mymap.begin(); it!=mymap.end(); it++)
            cout << it->first << " " << it->second << endl;

        //if(testcases)
            cout << endl;
        cin >> line;
    }
    return 0;
}

