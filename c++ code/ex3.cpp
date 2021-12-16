#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;

    if(a>=b && a>=c)
    {
        cout<<"largest Number is "<<a;
    }
    else if(b>=a && b>=c)
    {
        cout<<"largest Number is "<<b;
    }
    else
    {
        cout<<"largest Number is "<<c;
    }
}