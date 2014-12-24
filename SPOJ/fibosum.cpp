#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long int ll;
typedef vector<ll> vll;

ll fib_recur(ll n)
{
    return (n<2 ? n : fib_recur(n-1)+fib_recur(n-2));
}

ll fib(ll n)
{
    vll vec(n+1, 0);
    vec[1]=1;
    for(ll i=2; i<=n; i++)
        vec[i] = vec[i-1] + vec[i-2];
    return vec[n];
}

ll get_fib_nums(ll num1, ll num2)
{
    //ll sum=(num2-num1)*fib(num1) + (num2-num1+1)*fib(num1+1);
    for(ll i=num1; i<=num2; i++)
        cout << i << " : " << fib(i) << " " << endl;
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
        get_fib_nums(num1, num2);
    }
    return 0;
}

