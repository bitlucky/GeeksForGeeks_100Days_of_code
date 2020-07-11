
#include <iostream>
#include <vector>

// Snippet
Class Solution(vector<int>& nums , int target)
{
    if(nums==null || nums.size<4)
        return res;
    nums.sort();
    int size = nums.size();
    for(int i = 0 ; i<size ;i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            int left = j+1;
            int right = size-1 ;
            while(left<right)
            {
                sum = nums[left] + nums[right] + nums[i]+nums[j];
                if(sum==target)
                {
                    vector<int> arr(4);
                    arr.push_back(i);
                    arr.push_back(j);
                    arr.push_back(left);
                    arr.push_back(right);

                    int leftValue = nums[left];
                    while(left<size && nums[left]==leftValue)
                            ++left;
                    while(right>left && nums[right]==rightValue)
                            --right;
                }
                else if(sum<target){
                ++left ;
                }
                else   {
                 --right;
                }

            }

            while(j+1 <size  && nums[j+1]==nums[j])
                ++j;

            while(i+1 <size && nums[i+1]==nums[i])
                ++i;
        }
    }
	return arr;
}
