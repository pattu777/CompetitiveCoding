#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{ 
    string line;
    int tcase;
    cin >> tcase;
    getline(cin,line);
    while(tcase--)
    {
        int size;
        cin >> size;
        long int* vec = new long int[size];
        long int counter = 0;
        for(int j=0; j<size; j++)
        {
            long int num;
            cin >> num;
            vec[j] = num;
        }

        for(int j=0; j<size-1; j++)
        {
            for(int k=j+1; k<size; k++)
            {
                if(vec[j] > vec[k])
                    counter++;
            }
        }

        cout << counter << endl;
        getline(cin,line);
    }
    return 0;
}

