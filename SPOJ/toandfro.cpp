#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    fstream fin;
    fin.open(argv[1]);
    string line;

    getline(fin, line);
    int testcases = atoi(line.c_str());

    while(testcases--)
    {
        getline(fin,line);
        stringstream linestream(line);
        int num;
        linestream >> num;
    }
    return 0;
}

