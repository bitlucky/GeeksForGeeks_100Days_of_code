
Find duplicates in O(n) time and O(1) extra space | Set 1

Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

Input : n = 7 and array[] = {1, 2, 3, 1, 3, 6, 6}
Output: 1, 3, 6


Solution 1:

    Approach:The elements in the array is from 0 to n-1 and all of them are positive. So to find out the duplicate elements, a HashMap is required, but the question is to solve the problem in constant space. There is a catch, the array is of length n and the elements are from 0 to n-1 (n elements). The array can be used as a HashMap.
    Algorithm:

        Traverse the array from start to end.
        For every element,take its absolute value and if the abs(array[i])‘th element is positive, the element has not encountered before, else if negative the element has been encountered before print the absolute value of the current element.

Code :

// C++ code to find 
// duplicates in O(n) time 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print duplicates 
void printRepeating(int arr[], int size) 
{ 
int i; 
cout << "The repeating elements are:" << endl; 
for (i = 0; i < size; i++) 
{ 
	if (arr[abs(arr[i])] >= 0) 
	arr[abs(arr[i])] = -arr[abs(arr[i])]; 
	else
	cout << abs(arr[i]) << " "; 
} 
} 

// Driver Code 
int main() 
{ 
	int arr[] = {1, 2, 3, 1, 3, 6, 6}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 
	printRepeating(arr, arr_size); 
	return 0; 
} 

Approach: The basic idea is to use a HashMap to solve the problem. But there is a catch, the numbers in the array are from 0 to n-1, and the input array has length n. So, the input array can be used as a HashMap. While Traversing the array, if an element ‘a’ is encountered then increase the value of a%n‘th element by n. The frequency can be retrieved by dividing the a % n’th element by n.
Algorithm:

    Traverse the given array from start to end.
    For every element in the array increment the arr[i]%n‘th element by n.
    Now traverse the array again and print all those indexes i for which arr[i]/n is greater than 1. Which guarantees that the number n has been added to that index
    This approach works because all elements are in the range from 0 to n-1 and arr[i] would be greater than n only if a value “i” has appeared more than once.



#include <iostream>
using namespace std;
void findDuplicates(int [] , int );


void findDuplicates(int a[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        a[a[i]%n] = a[a[i]%n]+n;
    }

    bool flag=0 ;
    for(int i =0 ; i<n ; i++)
    {
        if(a[i]>=n*2)
        {
            cout<<i<<endl;
            flag=1;
        }

    }
    if(flag==0)
        cout<<"No duplicates found";


}

int main()
{
    int n, a[50];
    cin>>n;
    cout<<"enter the no of elements :\n";
    for(int i=0 ; i<n ;i++)
        cin>>a[i];
    cout<<"\n";
    findDuplicates(a,n);
    return 0;
}

