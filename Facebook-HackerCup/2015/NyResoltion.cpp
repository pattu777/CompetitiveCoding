#include <cmath>
#include <cstdio>
#include <numeric>
#include <fstream>
#include <ostream>
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

struct nut
{
    vvi arr;
};

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

long long int tweak_num(long long int num)
{

}

int main(int argc,char *argv[])
{
  	ifstream fin;
	ofstream op;
	op.open("output.txt");
	fin.open(argv[1]);

	string line;
	getline(fin, line);
	int tcases = atoi(line.c_str()), x = 1;

	while(x <= tcases)
	{
        int gp, gc, gf, num1, num2, num3;
        nut* n1 = new nut[1];
        vi v;

        getline(fin, line);
        v = get_num(line, v);        

        getline(fin, line);
        int foods = atoi(line.c_str());
        cout << foods << endl;
        while(foods--)
        {
            getline(fin, line);
            vi vec;
            n1->arr.push_back(get_num(line, vec));
        }
				
        for(int i=0; i<n1->arr.size(); i++)
            cout << "Case #" << x << ": " << n1->arr[i][0] << " " << n1->arr[i][1] << " " << n1->arr[i][2] << endl;
		x++;
	}
	fin.close();
	return 0;
}

