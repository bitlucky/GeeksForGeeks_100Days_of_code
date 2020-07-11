Algorithm:

    Create an empty hash.
    Insert all array elements to hash.
    Do following for every element arr[i]
    Check if this element is the starting point of a subsequence. To check this, simply look for arr[i] – 1 in the hash, if not found, then this is the first element a subsequence.
    If this element is the first element, then count the number of elements in the consecutive starting with this element. Iterate from arr[i] + 1 till the last element that can be found.
    If the count is more than the previous longest subsequence found, then update this.



#include <iostream>
#include <vector>
#include <set>

class Solution(int arr[] , int n  )
{
    unordered_set<int> S;
    int s=0;
    for(int i=0 ; i<n ; i++)
        S.insert(i);

    for(i=0 ; i<n ; i++)
    {
        if(S.find(arr[i]-1==S.end()))
        {
            int j = arr[i];
            while(S.find(j)!==S.end)
                j++;
            s = max(s , j-arr[i]);
        }
    }
    return s;
}

