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

map<ll, ll> mymap;
map<ll, ll>::iterator it;


ll get_usd(ll num)
{
    if(num == 0)
        return 0;

    ll x = mymap[num];
    if(x == 0)
    {
        x = max(num, get_usd(num/2) + get_usd(num/3) + get_usd(num/4));
        mymap[num] = x;
    }
    return mymap[num];
}

int main()
{
    string line;
    while(getline(cin, line))
    {
        ll num=atoll(line.c_str());
        cout << get_usd(num) << endl;
    }
	return 0;
}



