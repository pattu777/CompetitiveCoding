#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

void get_divisors(long int a, long int b, long int n)
{
    
}

int main(int argc, char** argv)
{
    fstream fin;
    fin.open(argv[1]);
    string line;

    getline(fin, line);
    stringstream linestream(line);
    long int a, b, n;
    linestream >> a >> b >> n;

    get_divisors(a, b, n);

    }
    return 0;
}

