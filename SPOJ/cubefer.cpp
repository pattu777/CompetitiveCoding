#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
vector<bool> vec(1000001, 0);
map<int, int> mymap;

void sieve_cube()
{
    int cell = cbrt(1000000);
    int count = 1;
    for(int i=2; i<=1000000; i++)
    {
        if(!vec[i])
        {
            long long int cube = pow(i, 3);
            for(int j=1; j*cube<=1000000; j++)
                vec[j*cube] = 1;

            count++;
            mymap[i] = count;
        }
    }
    /*for(int i=cell+1; i<=100000; i++)
    {
        if(!vec[i])
        {
            count++;
            mymap[i] = count;
        }
    }*/
}

void is_cubefree(int num, int tcase)
{
    if(!mymap[num])
        cout << "Case " << tcase << ": Not Cube Free" << endl; 
    else
        cout << "Case " << tcase << ": " << mymap[num] << endl; 
}

void print_cubes(int num)
{
    for(int i=2; i<=num; i++)
        is_cubefree(i, i);
}

int main(void)
{
    vec[0] = vec[1] = 0;
    mymap[1] = 1;
    sieve_cube();

    int testcases, i=1;
    cin >> testcases;
    while(i <= testcases)
    {
        int num;
        cin >> num;
        is_cubefree(num, i);
        i++;
    }
    return 0;
}

