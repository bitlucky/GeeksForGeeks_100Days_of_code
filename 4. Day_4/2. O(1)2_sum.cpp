#include <iostream>
#include <vector>
#include <map>

//snippet 

class Solution(vector<int>& nums , int target)
{
    //2(0) 7(1) 11(2) 15(3)
    map<int, int> myMap;
    vector<int> arr(2);
    //O(n)
    for(int i=0 ; i<nums.size() ; i++)
    {
        myMap[nums[i]]=i //saving index not values in the map ;
        
    }
    
    //O(n)
    for(int i=0 ; i<nums.size(); i++)
    {
        int comp = target- nums[i];
        if(myMap[comp] && myMap[comp]!=i){
            arr[0]=i;
            arr[1]=myMap[comp];
        }
    }
    return arr;
}
