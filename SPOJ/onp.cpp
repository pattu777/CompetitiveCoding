#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <stack>
#include <algorithm>

using namespace std;

string transform(string expr)
{
    string output;
    stack<char> mys;
    map<char, int> mymap;
    mymap['+'] = 1;
    mymap['-'] = 2;
    mymap['*'] = 3;
    mymap['/'] = 4;
    mymap['^'] = 5;

    for(int i=0; i<expr.size(); i++)
    {
        if( (expr[i] == '(') || (isalpha(expr[i])) )    // Push everything besides an operator or a closing brace
            mys.push(expr[i]);
        else if(expr[i] == ')')
        {
            while(mys.top() != '(')                     // Pop Everything till the first opening brace encountered
            {
                output += mys.top();
                mys.pop();
            }
            mys.pop();                                  // Remove the char "("
        }
        else
        {
            while(1)
            {
                char top = mys.top();
                if(isalpha(top))
                {
                    output += top;
                    mys.pop();
                }
                else if(top == '(')
                {
                    mys.push(expr[i]);
                    break;
                }
                else
                {
                    if(mymap[expr[i]] < mymap[top])
                    {
                        mys.push(expr[i]);
                        break;
                    }
                    else
                    {
                        output += top;
                        mys.pop();
                    }
                }
            }
        }
    }
    return output;
}

int main(void)
{
    string line;
    int testcases, i=0;
    cin >> testcases;

    while(i < testcases)
    {
        cin >> line;
        cout << transform(line) << endl;
        i++;
    }
    return 0;
}

