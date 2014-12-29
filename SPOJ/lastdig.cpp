#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int dig(int a, ll b)
{
    if((a==0) && (b!=0))
        return 0;
    else if(b==0)
        return 1;
    else
    {
        cout << "Inside else" << endl;
        vector<int> v;
        v.push_back(-1);
        long x=0;
        for(ll i=1;i<=b;i++,x++)
        {
            ll c=pow(a,i);
            if(!binary_search(v.begin(),v.end(),c%10))
                v.push_back(c%10);
            else
                break;
        }
        cout << x << endl << endl;
        for(int i=0; i<v.size(); i++)
            cout << v[i] << endl;
        
        return v[b%x+1];
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        cout << dig(a,b) << endl;
    }
    return 0;
}
