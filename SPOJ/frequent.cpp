#include <cstdlib>
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

long int find_frequent_num(vector<int> vec, int start, int end)
{
    cout << start << " " << end  << endl;
}

int main(void)
{
    string line;
    while(1)
    {
        cin >> line;
        if(line == "0")
            break;
        else
        {
            stringstream linestream(line);
            long long int n, q, num;
            linestream >> n >> q;
            vector<int> vec;
            vec.reserve(n);

            cin >> line;
            istringstream iss(line);
            while (iss >> num)
                vec.push_back(num);
            
            while(q--)
            {
                int start, end;
                cin >> start >> end;
                find_frequent_num(vec, start, end);
            }
        }
    }
    return 0;
}

