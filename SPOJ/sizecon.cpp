#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int tcase;
    cin >> tcase;
    long int sum = 0;
    while(tcase--)
    {
        int x;
        cin >> x;
        if(x>=0)
            sum += x;
    }
    cout << sum << endl;
    return 0;
}

