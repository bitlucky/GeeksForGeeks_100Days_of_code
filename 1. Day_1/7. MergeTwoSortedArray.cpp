#include <bits/stdc++.h>
using namespace std;
void MergeSortedArray(int [] , int , int [] , int );
int main()
{
    int n,a1[50],a2[50],m;
    cout<<"Enter the number of elements in array 1 :  ";
    cin>>m;
    cout<<"Enter the elements in sorted order for array 1 : "<<"\n";
    for(int i=0 ; i<m;i++)
        cin>>a1[i];
    cout<<"Enter the number of elements in array 2 :  ";
    cin>>n;
    cout<<"Enter the elements in sorted order in array 2: "<<"\n";
    for(int i=0 ; i<n;i++)
        cin>>a2[i];

    MergeSortedArray(a1 , m , a2,n);
    cout << "After Merging First Array: ";
    for (int i=0; i<m; i++)
        cout << a1[i] << " ";
    cout << "Second Array: ";
    for (int i=0; i<n; i++)
        cout << a2[i] << " ";
    return 0;
}

void MergeSortedArray(int a1[] , int m , int a2[] , int n )
{
        for(int i=n-1 ; i>=0 ; i--)
        {
            int j , last=a1[m-1];
            for(j=m-2 ; j>=0 && a1[j]>a2[i]  ; j--)
            {
                a1[j+1]=a1[j];
            }
            if(j!=m-2 || last>a2[i])
            {
            a1[j+1]=a2[i];
            a2[i] = last;
            }

        }
}

