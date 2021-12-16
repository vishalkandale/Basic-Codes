//C++ Program to Find Factorial
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a;
    int fact = 1;
    cout<<"Enter number : ";
    cin>>a;
    if(a<=0)
    {
        cout<<"wrong";
    }
    else{
        for(int i=1;i<=a;++i)
        {
            fact*=i;
        }
        cout<<"factorial is : "<<fact;
    }
    return 0;
}