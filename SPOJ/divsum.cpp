#include <cmath>
#include <cstdio>
#include <numeric>
#include <iostream>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <iterator>

using namespace std;

typedef vector< int > vi;
typedef vector< vi > vvi;
typedef long long ll;
typedef vector< ll > vll;
typedef vector< double > vd;
typedef vector< string > vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef istringstream iss;

#define ALL(x) x.begin(),x.end()
#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define FOREACH(it, X) for(__typeof((X).begin()) it = (X).begin(); it != (X).end(); ++it)
#define pb push_back
#define pf push_front
#define MP(a,b) make_pair(a,b)
#define ST first
#define ND second
#define SIZE(x) (int)x.size()

/* 
 * IP - Space seperated numbers as a string
 * OP - vector containint integers
 */
vi& get_num(string str, vi& vec)
{
    iss s(str);
    while(!s.eof())
    {
        string x;
        s >> x;
        vec.pb(atoi(x.c_str()));
    }
    return vec;
}

/*
 * Complexity - O(sqrt(n))
 */
ll count_divisors(ll num)
{
    if(num==1)
        return 0;
    
    ll sum=1;
    for(int i=2; i<=sqrt(num); i++)
    {
        if((num % i)==0)
        {
            sum += i;
            if(i !=(num/i))
                sum += (num/i);
        }
    }
    return sum;
}

/*
 * Complexity - O(lgn)
 */
ll divisors(ll num)
{
    if(num==1)
        return 0;

    ll sum=1, low=2, high=(num/2);
    while(low <= high)
    {
        ll mul = low*high;
        if(mul > num)
            high--;
        else if(mul < num)
            low++;
        else
        {
            sum += (low+high);
            low++;
            high--;
        }
    }
    return sum;
}

int main()
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    while(tcase--)
    {
        ll num;
        cin >> num;
        cout << count_divisors(num) << endl;
    }
	return 0;
}



