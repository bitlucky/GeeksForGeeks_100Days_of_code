The idea is to first sort the array and find the longest subarray with consecutive elements.
After sorting the array run a loop and keep a count and max (both initially zero). Run a loop from start to end and if the current element is not equal to the previous (element+1) then set the count to 1 else increase the count. Update max with a maximum of count and max.


int findLongestConseqSubseq(int arr[], int n) 
{ 
    int ans = 0, count = 0; 
  
    // sort the array 
    sort(arr, arr + n); 
  
    // find the maximum length 
    // by traversing the array 
    for (int i = 0; i < n; i++) { 
        // if the current element is equal 
        // to previous element +1 
        if (i > 0 && arr[i] == arr[i - 1] + 1) 
            count++; 
        // reset the count 
        else
            count = 1; 
  
        // update the maximum 
        ans = max(ans, count); 
    } 
    return ans; 
} 
