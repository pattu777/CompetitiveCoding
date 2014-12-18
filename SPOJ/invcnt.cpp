#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string line;

    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        getline(cin,line);
        int size;
        cin >> size;
        long long int* vec = new long long int[size];
        long long int counter = 0;

        for(int j=0; j<size; j++)
        {
            long long int num;
            cin >> num;
            vec[j] = num;
        }

        for(int j=0; j< size; j++)
        {
            for(int k=j+1; k<size; k++)
            {
                if(vec[j] > vec[k])
                    counter++;
            }
        }

        cout << counter << endl;
    }
    return 0;
}

