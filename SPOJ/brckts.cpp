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

bool check_brck(string str, int slen)
{
    stack<char> mys;
    for(int i=0; i<slen; i++)
    {
        if(str[i]=='(')
            mys.push(str[i]);
        else
            mys.pop();
    }
    if(mys.empty())
        return true;
    else
        return false;
}

string replace_brck(string str, int pos)
{
    if(str[pos] == ')')
        str[pos] = '(';
    else
        str[pos] = ')';
    return str;
}

int main()
{
    int tcase=1, i=1;
    while(tcase--)
    {
        cout << "Test " << i << ":" << endl;
        string line;
        getline(cin, line);
        int op, num, slen=atoi(line.c_str());

        getline(cin, line);
        cin >> op;
        while(op--)
        {
            cin >> num;
            if(num == 0)
            {
                if(check_brck(line, slen))
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
                line = replace_brck(line, num);
        }
        i++;
    }
	return 0;
}

