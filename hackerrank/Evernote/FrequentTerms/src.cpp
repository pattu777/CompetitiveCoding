#include <iostream>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
//#include<unordered_map>

using namespace std;

int main() {
    
    int test_cases,k;
    cin >> test_cases;
    vector<string> vec;
    
    for(int i=0;i<test_cases;i++)
    {
    	string str;
	str.erase(str.length(),1);
        getline(cin,str);
        vec.push_back(str);
    }
    cin >> k;
    /*sort(vec.begin(),vec.end());
    vector<int> arr;
    arr.assign(vec.size(),0);  	

    for(int i=0,k=0;i<vec.size();k++,i++)
    {
        int j = i+1;
        int count = 0;
        while(vec[j] == vec[i])
        {    
            count++;
            j++;
        }
        arr[k] = count;
        i = j-1;
    }
    vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    
    map<string,int>::iterator it;
    map<string,int> mymap;
    //cout << vec.size() << " " << arr.size() << endl;  
  //for(int i=0;i<vec.size();i++)
    //    mymap.insert(pair<string,int>(vec[i],arr[i]));*/
    for(int i=0;i<vec.size();i++)
	cout << vec[i] << endl;
    //for(it = mymap.begin();it != mymap.end();it++)
      //  cout << it->first << " " << it->second << endl;
    
    return 0;
}
