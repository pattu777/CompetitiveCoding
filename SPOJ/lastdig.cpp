#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int get_dig(int base,long long int index)
{
    if((index%10)==0)
        return 0;
    vector<int> v;
    long int x=0;
    for(long long int i=1;i<=index; i++,x++)
    {
        long long int a=pow(base,i);
        if(!binary_search(v.begin(), v.end(), a%10))
            v.push_back(a%10);
        else
            break;
    }
    return v[index%x];
}

int main()
{
    int tcase;
    cin >> tcase;
    while(tcase--)
    {
        long long int index;
        int base;
        cin >> base >> index;
        cout << get_dig(base,index) << endl;
    }
    return 0;
}

