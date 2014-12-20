#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int tcase;
    cin >> tcase;
    while(tcase--)
    {
        int x;
        cin >> x;
        double sum=0;
        for(int i=1;i<=x;i++)
        {
            double sqr = pow(i,2);
            sum += i/((sqr+i+1)*(sqr-i+1));
        }
        cout << setprecision(5) << sum << endl;
    }
    return 0;
}

