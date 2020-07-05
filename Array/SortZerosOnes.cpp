#include <bits/stdc++.h>
using namespace std;
void SortZerosOnes(int [] , int);
void printArray(int [] , int );
int main()
{
    int n , a[50];
    cin>>n;
    cout<<"Enter no. of elements";
    for(int i=0 ;i<n;i++)
        cin>>a[i];
    SortZerosOnes(a,n);
    printArray(a,n);
    return 0;
}

void SortZerosOnes(int a[] , int n )
{
    int low =0;
    int high = n-1;
    int mid=0;
    while(mid<=high){
    switch(a[mid])
    {
        case 0:
        swap(a[low] , a[mid]);
        low++ , mid++;
        break;

        case 1:
        mid++;
        break;

        case 2:
        swap(a[mid] , a[high]);
        high--;
        break;
    }
}
}

void printArray(int a[] , int  n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}

