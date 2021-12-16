//C++ Program to Find All Roots of a Quadratic Equation

#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,ans1,ans2;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    float root = b*b - 4*a*c;
    if( root>0)
    {
        ans1 = (-b + sqrt(root))/(2*a);
        ans2 = (-b - sqrt(root))/(2*a);
        cout<<"answer one is "<<ans1;
        cout<<"answer two is "<<ans2;
    }
    else if(root==0)
    {
        ans1 = -b /(2*a);
        cout<<"answer one is "<<ans1;
    }
    else
    {
        cout<<"root is negative";
    }


}