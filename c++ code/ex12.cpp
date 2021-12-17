//C++ Program to Reverse a Number
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a = 1234;
    int rev = 0;
    while(a!=0)
    {
        int remainder = a%10;
        rev = rev*10+remainder;
        a/=10;
    }
    cout<<rev;
}
