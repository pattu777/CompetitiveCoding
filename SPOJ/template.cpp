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

typedef vector< int > VI;
typedef vector< VI > VVI;
typedef long long LL;
typedef vector< LL > VLL;
typedef vector< double > VD;
typedef vector< string > VS;
typedef pair<int,int> PII;
typedef vector<PII> VPII;
typedef istringstream iss;

#define ALL(x) x.begin(),x.end()
#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define FOREACH(it, X) for(__typeof((X).begin()) it = (X).begin(); it != (X).end(); ++it)
#define PB push_back
#define PF push_front
#define MP(a,b) make_pair(a,b)
#define ST first
#define ND second
#define SIZE(x) (int)x.size()

void string_tokenizer(vector<string> vec, string s)
{
    string delimiters = " ";
    size_t current;
    size_t next = -1;
    do
    {
        current = next + 1;
        next = s.find_first_of( delimiters, current );
        vec.push_back((s.substr( current, next - current )));
    }while (next != string::npos);
    return vec;
}

void func(ll num)
{

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
        func();
    }
	return 0;
}

