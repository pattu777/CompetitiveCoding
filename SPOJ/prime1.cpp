/* 
 * Prime number generation between 2 given numbers.
 * This is done using segmented sieve of Eratosthenes algorithm
 * The Time complexity is O(nloglogn).
 */

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
//vector<bool> vec(100001, 0);
//#define LIMIT 1000000000

vector<bool> sieve(long int num1, long int num2)
{
    vector<bool> vec(num2 + 1, 0);
    vec[0] = vec[1] = 1;
    for(int i=2; i<=sqrt(num2); i++)
    {
        if(vec[i] == 0)
        {
            for(int j=2; i*j <= num2; j++)
                vec[i*j] = 1;
        }
    }
    return vec;
}

void get_primes(long int num1, long int num2)
{
    vector<bool> primes = sieve(num1, num2);
    vector<bool> segmented(num2-num1 + 1, 0);
    if(num1 ==1)
        segmented[0] = 1;
    for(long int i=2; i<primes.size(); i++)
    {
        if(!primes[i])
        {
            long int st_point = (num1 <= i ? i : (num1/i) * i);
            for(int j=st_point; j<=num2; j+=i)
            {
                if((j >= num1) && (j != i))
                    segmented[j-num1] = 1;
            }
        }
    }

    for(int i=0; i<segmented.size(); i++)
    {
        if(!segmented[i])
            cout << num1+i << endl;
    }
}

int main(void)
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        long int num1, num2;
        cin >> num1 >> num2;
        get_primes(num1, num2);

        if(testcases)
            cout << endl;
    }
    return 0;
}

