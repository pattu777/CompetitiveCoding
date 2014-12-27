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

void print_graph(int nodes, VVI& gr)
{
    for(int i=1; i<=nodes; i++)
    {
        for(VI::iterator it=gr[i].begin(); it != gr[i].end(); it++)
            cout << i << " --- " << *it << endl;
    }
}

void dfs_visit(int vertex, VVI& gr, VI& visited)
{
    if(!visited[vertex])
    {
        //cout << "Inside dfs_visit Node -> " << vertex << endl;
        visited[vertex] += 1;
        for(VI::iterator it=gr[vertex].begin(); it!=gr[vertex].end(); it++)
            dfs_visit(*it, gr, visited);
    }
}

bool dfs(int nodes, VVI& gr, VI& visited)
{
    for(int vertex=1; vertex<=nodes; vertex++)
        dfs_visit(vertex, gr, visited);

    for(int i=1; i<=nodes; i++)
        cout << i << " === " << visited[i] << endl;
    /*{
        if(visited[i]>1)
            return false;
    }*/
    return true;
}

bool is_tree(VVI& gr, VI& visited)
{
    int st_vertex=1;
    dfs(st_vertex, gr, visited);
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

        if(dfs(nodes, gr, visited))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}

