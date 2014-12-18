#include <cstdlib>
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

long long int get_position(vector<long long int> vec, long long num, long long int low, long long high)
{
    cout << low << " " << high << "\t"<< num << endl;
    while(low <= high)
    {
        long long mid = low+ (high-low)/2;
        if(num == vec[mid])
            return mid;
        else if(num < vec[mid])
            high = mid;
        else
            low = mid+1;
    }
    return -1;
}

int main(void)
{
    string line;

    cin >> line;
    stringstream linestream(line);
    long long int n, q, num;
    linestream >> n >> q;
    vector<long long int> vec;
    vec.reserve(n);

    cin >> line;
    istringstream iss(line);
    while (iss >> num)
        vec.push_back(num);

    while(q--)
    {
        cin >> line;
        stringstream lstream(line);
        long long int num;
        lstream >> num;
        
        cout << get_position(vec, num, 0, vec.size()-1) << endl;
    }
    return 0;
}

