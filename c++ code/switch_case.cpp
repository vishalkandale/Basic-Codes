#include<iostream>
#include<string>
using namespace std;
int main()
{
    int day = 8;
    switch(day)
    {
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wenusday";
            break;
        case 4:
            cout<<"thusday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sonday";
            break;
        default:
            cout<<"wrong day";

    }
}