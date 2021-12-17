//C++ Program to Find LCM
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 1st integer : ";
    cin>>a;
    cout<<"Enter 2nd interger : ";
    cin>>b;
    int c = max(a,b);

    while(true)
    {
        if(c%a==0 && c%b==0)
        {
            cout<<"LCM is : "<<c;
            break;
        }
        ++c;
    }

}