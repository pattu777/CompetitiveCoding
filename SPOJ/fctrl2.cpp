#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>

using namespace std;
namespace mp = boost::multiprecision;

/*mp_cpp_int fact(int num)
{
    mp::cpp_int fc = 1;
    for(unsigned i = 1; i <=num; ++i)
        fc *= i;
    return fc;
}*/

int main()
{
    string line;
    getline(cin, line);
    int tcase=atoi(line.c_str());
    while(tcase--)
    {
        int num;
        cin >> num;

        mp::cpp_int fc = 1;
        for(unsigned i = 1; i <=num; ++i)
            fc *= i;
        cout << fc << endl;
    }
    return 0;
}

