#include<iostream>
#include<string.h>
using namespace std;

void swap(int &x,int &y)
{
    int i = x;
    x = y;
    y = i;
}

int main()
{
    int fnum = 10;
    int snum = 20;
    cout<<"before swap : ";
    cout<<fnum<<","<<snum<<"\n";
    swap(fnum,snum);
    cout<<"after swap : ";
    cout<<fnum<<","<<snum;
    return 0;

}