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

int main(void)
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    while(tcase--)
    {
        getline(cin, line);
        ll num=atoi(line.c_str()), sum=0;

        vi men, wm;
        getline(cin, line);
        men = get_num(line, men);
        getline(cin, line);
        wm = get_num(line, wm);

        sort(men.begin(), men.end());
        sort(wm.begin(), wm.end());

        for(int i=0; i<num; i++)
            sum += (men[i]*wm[i]);
        
        cout << sum << endl;
    }
	return 0;
}

