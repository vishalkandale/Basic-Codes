//Calculate Factorial Using Recursion
#include<iostream>
using namespace std;
int fact(int n);


int main()
{
    int n;
    cout<<"Enter value  : ";
    cin>>n;
    cout<<fact(n);
    return 0;
}
int fact(int n)
{
    if(n>0)
    {
        return n * fact(n-1);
    }
    return 1;
}
