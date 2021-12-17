//C++ Program to Find GCD
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st integer : ";
    cin>>a;
    cout<<"Enter 2nd interger : ";
    cin>>b;
    int c = min(a,b);

    for(int i=2;i<c;i++)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<"GCD number is : "<<i;
        }
    }

}