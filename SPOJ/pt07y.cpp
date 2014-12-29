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

void dfs(int vertex, VVI& gr, VI& visited)
{
    if(visited[vertex] > 1)
        return;
    else
    {
        visited[vertex] += 1;
        for(VI::iterator it=gr[vertex].begin(); it!=gr[vertex].end(); it++)
            dfs(*it, gr, visited);
    }
}

bool is_tree(int nodes, VVI& gr, VI& visited)
{
    int st_vertex=1;
    dfs(st_vertex, gr, visited);
    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] > 1)
            return false;
    }
    return true;
}

int main()
{
    string line;
    while(getline(cin, line))
    {
        int nodes, edges;
        iss lstream(line);
        lstream >> nodes >> edges;

        VVI gr(nodes+1);
        VI visited(nodes+1, false);

        for(int i=0; i<edges; i++)
        {
            getline(cin, line);
            iss lstream(line);
            int u, v;
            lstream >> u >> v;
            gr[u].push_back(v);
        }
        
        if(is_tree(nodes, gr, visited))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}

