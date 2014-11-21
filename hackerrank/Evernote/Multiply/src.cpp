#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	
    int test_cases;
    vector<int> vec;
	cin >> test_cases;
    vec.push_back(1);
    long long int mult = 1;
    for(int i=0,x;i<test_cases;i++)
    {
    	cin >> x;
        vec.push_back(x);
        mult *= x;
    }
    
	//vec.erase(0,1);
    for(int i=1;i<vec.size();i++)
        cout << (int)(mult/vec[i]) << endl;

	return 0;
}
