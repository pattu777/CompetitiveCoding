#include <iostream>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;
typedef vector<ll> vll;

map<int, int> mymap;

ll fib_recur(ll n)
{
    return (n<2 ? n : fib_recur(n-1)+fib_recur(n-2));
}

ll fib(ll n)
{
    if(n < 2)
        return n;

    ll x = mymap[n];
    if(x==0)
    {
        x = fib(n-1) + fib(n-2);
        mymap[n] = x;
    }
    return x;
}

ll get_fib_sum(ll num1, ll num2)
{
    //ll sum=(num2-num1)*fib(num1) + (num2-num1+1)*fib(num1+1);
    ll sum=0;
    for(ll i=num1; i<=num2; i++)
        sum += fib(i);
    return sum;
}

int main(void)
{
    string line;
    getline(cin, line);
    int testcases = atoi(line.c_str());
    while(testcases--)
    {
        ll num1, num2;
        cin >> num1 >> num2;
        cout << get_fib_sum(num1, num2) << endl;
    }
    return 0;
}

