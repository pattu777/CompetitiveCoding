#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

void list_primes()
{
    long int x = 100000000, total=0;
    vector<bool> vec(x+1, 0);
    long int cell = sqrt(x);
    for(long int i=2; i<=cell; i++)
    {
        if(!vec[i])
        {
            total++;
            if((total%100)==1)
                cout << i << endl;
            for(long int j=i; j*i <= x; j++)
                    vec[i*j] = 1;
        }
    }
    for(long int i=cell+1; i<x; i++)
    {
        if(!vec[i])
        {
            total++;
            if((total%100)==1) 
                cout << i << endl;
        }
    }
}

int main(void)
{
    list_primes();
    return 0;
}

