#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

bool is_pallindrome(long long int x)
{
    vector<int> vec;
    while(x!=0)
    {
        vec.push_back(x%10);
        x = x/10;
    }
    for(int i=0, j=vec.size()-1; i>=j ; i++, j--)
    {
        if(vec[i] != vec[j])
            return false;
    }
    return true;
}

long long int next_palindrome(long long int num)
{
    for(long long int i=num;; i++)
    {
        if(is_pallindrome(i))
            return i;
    }
}

int main(int argc, char** argv)
{
    string line;
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        long long int num;
        cin >> num;
        cout << next_palindrome(num) << endl;
    }
    return 0;
}

