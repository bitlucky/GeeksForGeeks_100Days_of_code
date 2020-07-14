#include <bits/stdc++.h>
using namespace std;
int maxSubArraySum(int [] , int );
int main()
{
    int size,a[50] ,res;
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    cout<<"Enter the elements for array : "<<"\n";
    for(int i=0 ; i<size;i++)
        cin>>a[i];
    res = maxSubArraySum(a,size);
    cout << "Maximum contiguous sum is " <<res;
    return 0;
}

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}


