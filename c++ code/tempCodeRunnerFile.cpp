#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>0)
    {
        return n * fact(n-1)
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter value  : ";
    cin>>n;
    cout<<factS(n);
    return 0;
}S