#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

long int find_num(long int coord, long int st_point, int x, int y)
{
    for(long int i=st_point, count=0; i<=x; i++, count++)
    {
        if((count%2) == 1)
            coord++;
        else
            coord += 3;
    }
    return coord;
}

void get_point(int x, int y)
{
    long int coord = -3;
    long int st_point = 0;
    if(y == x)
        coord = find_num(coord, st_point, x, y);
    else if(y == x-2)
    {
        coord = -1;
        st_point = 2;
        coord = find_num(coord, st_point, x, y);
    }
    else
    {
        cout << "No Number" << endl;
        return;
    }
    cout << coord << endl;
}

int main(int argc, char** argv)
{
    string line;
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        int num1, num2;
        cin >> num1 >> num2;
        get_point(num1, num2);
    }
    return 0;
}

