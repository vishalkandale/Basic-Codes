//C++ Program to Generate Multiplication Table
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    for(int i=1;i<11;i++)
    {
        cout<<num<<" X "<<i<<" = "<<num*i<<"\n";
    }
}