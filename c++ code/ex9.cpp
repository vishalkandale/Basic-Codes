//C++ Program to Display Fibonacci Series

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n1 = 0;
    int n2 = 1;
    int n3;
    while(n1<30)
    {
        cout<<n1<<"\n";
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
}