#include <iostream>
#include <vector>
#include <map>

//snippet

vector<int> twosum(vector<int>& nums , int target){

    //O(n^2)
    vector<int> arr(2);
    for(i=0 ; i<nums.size();i++)
    {
        for(j=i+1;j<nums.size();j++) //if nums[i] and nums[j] = target then i have the answer
                {
            if(nums[i]+nums[j]==target)
            {
            arr[0]=i;    //saving index not number
            arr[1]=j;      //same as above , save index
            }
        }
    }
    return arr;
}

