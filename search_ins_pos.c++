#include <vector>
#include <iostream>
using namespace std;
class Solution 
{
public:
    int binary(vector<int>& nums, int target,int start, int stop)
    {
        int mid = (start+stop)/2;
        while(stop>=start)
        {
            mid = (start + stop)/2;
            if(nums[mid]==target)
            {
                return mid;
            } 
            else if(nums[mid]>target)
            {
                stop = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        cout<<mid;
        if(target>nums[mid])
        {
            return mid+1;
        }
        else
        {
            
            return mid;
        }
    }
    int searchInsert(vector<int>& nums, int target) 
    {
        return binary(nums,target,0,nums.size()-1);
    }
};