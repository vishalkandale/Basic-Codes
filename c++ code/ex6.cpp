//C++ Program to Check Leap Year
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter 4 digit year : ";
    cin>>year;

    if (year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<year<<" it is leap year";
            }
            else
            {
                cout<<year<<" its not leap year";
            }
        }
        else{
                cout<<year<<" it is leap year";
            }
    }

    else
        {
            cout<<year<<"its not leap year";
        }

    }