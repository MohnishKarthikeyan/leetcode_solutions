#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> beautifulArray(int n) 
    {
        vector<int> a = {1};
        while(a.size()<n)
        {
            vector<int> b;
            for(auto num:a)
            {
                if(num*2-1<=n)
                {
                    b.push_back(num*2-1);
                }
            }
            for(auto num:a)
            {
                if(num*2<=n)
                {
                    b.push_back(num*2);
                }
            }
            a = b;
        }
        return a;
    }
};