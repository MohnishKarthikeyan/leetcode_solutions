#include <stack>
#include <iostream>
using namespace std;
class Solution {
public:
    stack<char> obj;
    bool isValid(string s) 
    {
        for(int i=0;i<s.length();i++)
        {
            if(obj.empty()==true)
            {
                obj.push(s[i]);
            }
            else if((obj.top()=='(' && s[i]==')') || (obj.top()=='[' && s[i]==']') || (obj.top()=='{' && s[i]=='}'))
            {
                obj.pop();
            }
            else
            {
                obj.push(s[i]);
            }
        }
        if(obj.empty()==true)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};