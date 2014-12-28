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

/* Uses substring search
 * IP - Space Seperated strings
 * OP - Vector containing strings
 */
vs& s_tokens(string s, vs& vec)
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

/* Uses stringstream. 
 * IP - Space seperated numbers as a string
 * OP - vector containint integers
 */
vs& get_tokens(string str, vs& vec)
{
    iss s(str);
    while(!s.eof())
    {
        string x;
        s >> x;
        vec.pb(x);
    }
    return vec;
}

ll get_sum(vvi& mat, int x1, int y1, int x2, int y2)
{
    ll sum=0;
    for(int i=x1; i<=x2; i++)
    {
        for(int j=y1; j<=y2; j++)
            sum += mat[i][j];
    }
    return sum;
}

int main(void)
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    while(tcase--)
    {
        getline(cin, line);
        ll sz=atol(line.c_str());
        vvi mat(sz, vi(sz,0));              //Declare a 2d array using vectors and all elements 0.

        while(1)
        {
            getline(cin, line);
            if(line == "END")
                break;

            vs vec;
            vec = get_tokens(line, vec);
            if(vec[0] == "SET")
                mat[atoi(vec[1].c_str())][atoi(vec[2].c_str())] = atoi(vec[3].c_str());

            else if(vec[0] == "SUM")
                cout << get_sum(mat, atoi(vec[1].c_str()), atoi(vec[2].c_str()), atoi(vec[3].c_str()), atoi(vec[4].c_str())) << endl;
        }
        getline(cin, line);
    }
	return 0;
}


