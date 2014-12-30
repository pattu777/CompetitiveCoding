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

vs& string_tokenizer(vs& vec, string s, string delimiters)
{
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

ll eval(string str)
{
    stack<char> mys;
    ll var;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '(')
            mys.push(str[i]);
        else if(str[i] == ")")
        {
            while(mys.top() != "(")
            {
                char ch=mys.top();
            }
        }
        else if(str[i] == "+")

}

int main()
{
    while(1)
    {
        string line;
        getline(cin, line);
        cout << eval(line) << endl;
    }
	return 0;
}



