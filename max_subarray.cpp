#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int cross(vector<int>& nums,int low, int mid, int high)
    {
        int sum = 0;
        int left_sum = -10000;
        int right_sum = -10000;
        for(int i=mid;i>=low;i--)
        {
            sum += nums[i];
            if(sum>left_sum)
            {
                left_sum = sum;
            }
        }
        sum = 0;
        for(int i=mid+1;i<=high;i++)
        {
            sum += nums[i];
            if(sum>right_sum)
            {
                right_sum = sum;
            }
        }
        return (left_sum+right_sum);
    }
    int max_sub(vector<int>& nums,int low, int high)
    {
        int left_sum,right_sum,cross_sum;
        if(high==low)
        {
            return nums[low];
        }
        else
        {
            int mid = (high + low)/2;
            left_sum = max_sub(nums,low,mid);
            right_sum = max_sub(nums,mid+1,high);
            cross_sum = cross(nums,low,mid,high);
            if(left_sum>=cross_sum && left_sum>=right_sum)
            {
                return left_sum;
            }
            else if(right_sum>=cross_sum && right_sum>=left_sum)
            {
                return right_sum;
            }
            else
            {
                return cross_sum;
            }
        }
    }
    int maxSubArray(vector<int>& nums) 
    {
        int a;
        a=max_sub(nums,0,nums.size()-1);
        cout<<a;
        return a;
    }
};