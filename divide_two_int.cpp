#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == 0) {
        return 0;
    }
    bool moh = (dividend < 0) ^ (divisor < 0);
    if(dividend==INT_MIN && divisor == -1)
    {
        dividend+=1;
        return -dividend;
    }
    if(dividend==INT_MIN && divisor == 1)
    {
        return INT_MIN;
    }
    if(dividend==INT_MAX && divisor == -1)
    {
        return -1*INT_MAX;
    }
    if(dividend==INT_MAX && divisor == 1)
    {
        return INT_MAX;
    }
    long d1 = (long) dividend;
    long d2 = (long) divisor;
    d1 = abs(dividend);
    d2 = abs(divisor);
    int q = 0;
    while (d1 >= d2) {
        d1 -= d2;
        q+=1;
    }
    return moh ? -q : q;
    }
};