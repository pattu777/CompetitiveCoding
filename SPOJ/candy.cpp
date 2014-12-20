#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    while(1)
    {
        string line;
        getline(cin,line);
        if(line == "-1")
            break;

        int boxes = atoi(line.c_str()), sum=0;
        int a = boxes;
        vector<int> vec;
        vec.reserve(boxes);
        while(boxes--)
        {
            getline(cin, line);
            int x = atoi(line.c_str());
            vec.push_back(x);
            sum += x;
        }

        if((sum%a)!=0)
            cout << -1 << endl;
        else
        {
            sort(vec.begin(), vec.end());
            int med= sum/a, moves=0;
            for(int i=0; vec[i]<med; i++)
                moves += (med-vec[i]);

            cout << moves << endl;
        }
    }
    return 0;
}

