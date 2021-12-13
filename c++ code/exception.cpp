#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    try
    {
        int age = 15;
        if(age>=18)
        {
            cout<<"access granted";
        }
        else
        {
            throw 505;
        }
    }
    catch(int num)
    {
        cout<<"access denied"<<"\n";
        cout<<num;
    }
    return 0;
}
