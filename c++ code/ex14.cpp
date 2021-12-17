//C++ Program to Check Whether a Number is Prime or Not
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a = 29;
    bool isprime = true;
    if ( a==0 || a==1)
    {
        isprime =false;
    }
    else
    {
        for(int i=2;i<a/2;i++)
        {
            if(a%i==0)
            {
                isprime = false;
                break;
            }
        }
    }
    if(isprime)
    {
        cout<<"its prime";
    }
    else
    {
        cout<<"its not";
    }
}