//C++ Program to Check Whether a Number is Palindrome or Not

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a = 12121;
    int temp = a;
    int rev = 0;
    do
    {
        int num = a%10;
        rev = (rev * 10) + num;
        a=a/10;
    } while (a!=0);
    if(temp==rev)
    {
        cout<<"it is palidrome";
    }
    else{
        cout<<"not palidrome ";
    }
    
}