//C++ Program to Check Whether Number is Even or Odd

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter Number : ";
    cin>>a;
    if(a%2==0)
    {
        cout<<"Even number";
    }
    else
    {
        cout<<"Odd number";
    }
}