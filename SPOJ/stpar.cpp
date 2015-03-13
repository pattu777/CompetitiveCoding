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
        vec.push_back(atoi(x.c_str()));
    }
    return vec;
}

bool is_seq(vi& vec)
{
    stack<int> mys;
    vi arr;
    arr.push_back(-1);
    mys.push(-1);
    for(int i=0; i<vec.size(); i++)
    {
        ll top = mys.top();
        if((vec[i] < top) && (vec[i] > arr.back()))
            mys.push(vec[i]);
        else if(vec[i] > arr.back())
            arr.push_back(vec[i]);
        else if( (vec[i] > top) || (vec[i] < arr.back()) )
            return false;
    }
    return true;
}

int main()
{
    string line;
    while(1)
    {
        getline(cin, line);
        if(line == "0")
            break;

        ll n = atoll(line.c_str());
        getline(cin, line);
        vi vec;
        vec = get_num(line, vec);
        if(is_seq(vec))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
	return 0;
}



