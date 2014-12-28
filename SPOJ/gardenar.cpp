#include <cmath>
#include <cstdio>
#include <numeric>
#include <iostream>
#include <iomanip>
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

int main(void)
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    while(tcase--)
    {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        double s = (double)(num1+num2+num3)/(2.0);
        double sum= (double)pow(num1, 2) + (double)pow(num2, 2) + (double)pow(num3, 2);
        double mult = s*(s-num1)*(s-num2)*(s-num3);
        double area = 0.5 * ( ((1.73205080757 * sum)/(4.0)) + (3.0) * sqrt(mult));

        printf("%.2f\n", area);
    }
	return 0;
}


