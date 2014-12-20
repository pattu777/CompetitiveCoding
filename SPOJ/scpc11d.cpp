#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

bool is_right_angle(int x, int y, int z)
{
    long int powx = pow(x, 2), powy=pow(y, 2), powz=pow(z, 2);
    if( ((powx==powy+powz)||(powy==powx+powz)||(powz==powx+powy)) && (((z+x)>y)||((z+y)>x)||((x+y)>z)) )
        return 1;
    else
        return 0;
}

int main(void)
{
    while(1)
    {
        string line;
        getline(cin,line);
        if(line == "0 0 0")
            break;

        stringstream linestream(line);
        int x, y, z;
        linestream >> x >> y >> z;
        if(is_right_angle(x, y, z))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    return 0;
}

