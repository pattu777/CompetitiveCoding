#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

string get_format(int num)
{
    if(num == 1)
        return "2(0)";
    else
    {
        while(num != 0)
        {
            if( (num %2) == 1 )
                return get_format(num/2);
            num = num/2;
        }
    }
}

vector<int> get_binary(int num)
{
    vector<int> vec;
    if (num ==0)
    {
        vec.push_back(0);
        return vec;
    }
    else
    {
        while(num != 0)
        {
            vec.push_back(num % 2);
            num = num/2;
        }
    }
    return vec;
}

int main(void)
{
    int arr[] = {137, 1315, 73, 136, 255, 1384, 16385};
    //for(int i=0; arr[i]!='\0';i++)
      //  cout << arr[i] << "=" << get_format(arr[i]) << endl;
    vector<int> v = get_binary(arr[1]);
    for(int i=v.size()-1; i>=0; i--)
        cout << v[i] << endl;
    return 0;
}

