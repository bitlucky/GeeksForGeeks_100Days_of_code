Given an array, return length of the longest subarray of non- negative integers.

Note: Subarray here means a continuous part of the array.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n denoting the size of the array. The following line contains n space separated integers forming the array.

Output:
Print the length of the longest subarray of non-negative integers.

Constraints:
1<=T<=10^5
1<=n<=10^5
1<=a[i]<=10^5

Example:
Input:
2
9
2 3 4 -1 -2 1 5 6 3
10
1 0 0 1 -1 -1 0 0 1 0

Output:
4
4





#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=0,c=0;
	    cin>>n;
	    int i;
	    vector<int> a(n);
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=0)
	            c++;
	        else
	            c=0;
	        if(max<c)
	            max=c;
	    }
	    cout<<max<<endl;
	}
	return 0;
}

