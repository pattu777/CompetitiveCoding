#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

typedef long long ll;
typedef vector< ll > vll;
typedef vector< vll > vvll;
typedef istringstream iss;

vll& get_nums(string str)
{
    vl v;
    iss s(str);
    while(!s.eof())
    {
        string x;
        s >> x;
        v.pb(atoi(x.c_str()));
    }
    return v;
}

ll get_path_sum(vvll& vec, ll num)
{
    ll sum=vec[0][0];
    for(int i=1; i<num; i++)
    {
        for(int j=0; j<vec[i].size()-1; j++)
            sum += max(vec[i][j], vec[i][j+1])

}

int main()
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    vvll vec;
    while(tcase--)
    {
        getline(cin, line);
        ll num=atoi(line.c_str());
        for(int i=0; i<num; i++)
        {
            getline(cin, line);
            vec.push_back(get_nums(line));
        }
        cout << get_path_sum(vec, num) << endl;
        vec.clear();
    }
	return 0;
}

