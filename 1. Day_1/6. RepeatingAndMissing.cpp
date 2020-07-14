#include <bits/stdc++.h>
using namespace std;
void RepeatMissing(int [] , int n);
int fact(int);
int main()
{
    int n , a[50];
    cin>>n;
    for(int i=0 ; i<n ;i++)
        cin>>a[i];
    RepeatMissing(a,n);

}

void RepeatMissing(int a[] , int n)
{
    int S=0;
    int P=1;
    int x,y ;
    int D;
    int c = n-2 , i;

    for(int i=0 ; i<n ; i++)
    {
        S = S + a[i];
        P = P *a[i];
    }
    S = S-n*(n+1)/2;
    P = P/fact(c);

    D=sqrt(S*S - 4*P);
    x = (D+S)/2;
    y = (S-D)/2;
    cout<<"Repeating and Missing number is"<<x<<"and"<<y;
}

int fact( int c)
{
    return (c==0) ? 1 : c*fact(c-1);
}

