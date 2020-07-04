#include <bits/stdc++.h>
using namespace std;

string nthprimedigit ( int number )

{
    
    int rem;
    string num ; 
    while(number)
    {
        rem = number % 4;
        switch(rem)
        {
            case 1: 
            num.push_back('2');
            break;
        
            case 2:
            num.push_back('3');
            break;
            
            case 3:
            num.push_back('5');
            break;
            
            case 0:
            num.push_back('7');
            break;
            
        }
            if(number%4==0)
                number--;
                
            number=number/4;
        }
        
        reverse(num.begin() , num.end());
        return num;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x ;
        cin>>x;
        cout<<nthprimedigit(x)<<endl;
        
    }
}

