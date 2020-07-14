Given an array of n elements which contains elements from 0 to n-1, with any of these numbers appearing any number of times. Find these repeating numbers in O(n) and using only constant memory space.

Example:

Input : n = 7 and array[] = {1, 2, 3, 1, 3, 6, 6}
Output: 1, 3, 6

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

